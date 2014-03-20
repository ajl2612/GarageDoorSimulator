//
//  Keyboard.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Keyboard.h"

void* keyBoardHelper(void* args);
void* monitorHelper(void* args);

Keyboard::Keyboard( EventQueue *queue ){
    this->myQueue = queue;
    this-> done = false;
    this -> alreadyRead = true;
    this-> newCmds = false;

    pthread_create(&keyboard, NULL, &keyBoardHelper, this);
    pthread_create(&monitor, NULL, &monitorHelper, this);
}

void Keyboard::sendCMD(char c){
    this->myQueue->enterCMD(c);
}

void* keyBoardHelper(void* args){
	return static_cast<Keyboard*>(args)->runProcess(NULL);
}

void* monitorHelper(void* args){
	return static_cast<Keyboard*>(args)->monitorBlocking(NULL);
}

void* Keyboard::runProcess(void* args){
	printf("Begin processing for user input\n");

	    std::string input = "";
	    while(!done){
	        //printf("In loop....\n");
	        sleep(2);
	        if(newCmds){
	            mtx.lock();
	           // printf( "NEW COMMANDS !!!!\n");
	            sendCMD(command);
	            newCmds = false;
	            mtx.unlock();
	        }
	    }
	    printf("Terminating processing for user input\n");

	    return EXIT_SUCCESS;

}

void* Keyboard::monitorBlocking(void* args){

	//printf("Begin scanning for user input\n");

	    std::string input = "";
	    while( !done ){
	       // printf("waiting...\n");
	        getline(std::cin, input);
	       //std::printf( "got something...%s\n", input.c_str());
            command = input[0];
            if(command == 'p' || command == 'm' || command == 'i' || command == 'q'){
                mtx.lock();
                newCmds = true;
                mtx.unlock();
                if(input.compare("q" )== 0) {
                    done = true;
                }
            }else{
                printf("Invalid command %c\n", command);
            }
	    }

	    //printf("Terminating scanning for user input\n");

	    return NULL;
}

void Keyboard::shutDown(){
	done = true;
}



