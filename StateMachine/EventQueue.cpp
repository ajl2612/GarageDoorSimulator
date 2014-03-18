//
//  EventQueue.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "EventQueue.h"


void EventQueue::enterCMD(char cmd){
    this->mtx.lock();
    this -> cmdQueue.push(cmd);
    this->mtx.unlock();
    
}

char EventQueue::frontCMD(){
    this->mtx.lock();
    return this->cmdQueue.front();
    this->mtx.unlock();
}

void EventQueue::popCMD(){
    this->mtx.lock();
    this->cmdQueue.pop();
    this->mtx.unlock();
}
