//
//  main.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/5/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include "mutex.h"
#include <queue>
#include "Keyboard.h"
#include "EventQueue.h"
#include "Motor.h"
#include "StateMachine.h"
#define CYCLES 3
#define NUM_THREADS 5
#define END_READ 'q'


void* thread (void* arg);

std::string command;
bool newCmds = false;
bool alreadyRead = true;
bool done = false;


PThreads::Mutex mtx;


void* threadIO (void* arg){
/*
    printf("Begin scanning for user input\n");
    
    std::string input = "";
    while( !done ){
        printf("waiting...\n");
        getline(std::cin, input);
        std::printf( "got something...%s\n", input.c_str());
        
        mtx.lock();
        
        cmdQueue.push(input.at(0));
        cmdQueue.push(input.at(0));
        cmdQueue.push(input.at(0));
        
        newCmds = true;
        mtx.unlock();
        if(input.compare("q" )== 0) {
            done = true;
        }
    }
    
    printf("Terminating scanning for user input\n");
    */
    return NULL;
}

int main( int argc, char *argv[]){
   
	EventQueue myQueue = EventQueue();
	Keyboard keys = Keyboard(&myQueue);
    Motor myMotor = Motor(&myQueue);
    StateMachine rageAgainst = StateMachine(&myQueue, &myMotor);
    int x = 0;
    while(true){
        x++;
        x--;
    }

	return 1;

}
