//
//  Motor.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Motor.h"

Motor::Motor( EventQueue* queue ){
    this->myQueue = queue;
}


void Motor::sendCMD(char c){
    this->myQueue->enterCMD(c);
}

void* Motor::runProcess(void* args){

    return NULL;
}
