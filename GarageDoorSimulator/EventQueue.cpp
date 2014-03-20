//
//  EventQueue.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "EventQueue.h"


EventQueue::EventQueue(){

}

void EventQueue::enterCMD(char cmd){
    printf("EventQueue recieved new command ... %c.\n", cmd);
    //this->mtx.lock();
    this -> cmdQueue.push(cmd);
    //this->mtx.unlock();
    
}

char EventQueue::frontCMD(){
    //this->mtx.lock();
    return this->cmdQueue.front();
    //this->mtx.unlock();
}

void EventQueue::popCMD(){
    //this->mtx.lock();
    this->cmdQueue.pop();
    //this->mtx.unlock();
}

bool EventQueue::empty(){
    return cmdQueue.empty();
}
