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
#include "Utils/mutex.h"
#include <queue>
#define CYCLES 3
#define NUM_THREADS 5
#define END_READ 'q'


void* thread (void* arg);

std::string command;
bool newCmds = false;
bool alreadyRead = true;
bool done = false;
std::queue<char> cmdQueue;

PThreads::Mutex mtx;


void* threadIO (void* arg){

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
    
    return NULL;
}

int main( int argc, char *argv[]){
    
    printf("Begin processing for user input\n");
    
    std::string input = "";
    pthread_t io;
    pthread_create(&io, NULL, threadIO, NULL);
    
    while(!done){
        printf("In loop....\n");
        sleep(2);
        if(newCmds){
            mtx.lock();
            printf( "NEW COMMANDS !!!!\n");

            while( !cmdQueue.empty()){
                printf( "entered....%c\n", cmdQueue.front());
                cmdQueue.pop();
            }
            newCmds = false;
            mtx.unlock();
        }
        
        
        
    }
    pthread_join(io,NULL);
    
    printf("Terminating processing for user input\n");

    return EXIT_SUCCESS;
}



/*
int main(int argc, char *argv[]) {
   
    printf("Welcome to the QNX Momentics IDE\n");
    int myInts [NUM_THREADS] = {1,2,3,4,5};
    int i;
    pthread_t threads [NUM_THREADS];
    for( i = 0; i < NUM_THREADS; i++){
        pthread_create(&threads[i], NULL, thread, &myInts[i] );
    }
    
    for( i = 0; i < NUM_THREADS; i++){
        pthread_join(threads[i],NULL);
    }
    
    printf("Goodbye!\n");
    return EXIT_SUCCESS;
    
}
*/
/*
void* thread (void* arg){
    unsigned int threadNum = *(unsigned int*)arg;
    int i;
    for(i = 0; i < CYCLES; i++) {
        
        sleep(threadNum);
        
        printf("Thread %d cycled \n", threadNum);
    }
    
    return NULL;
}*/
