//
//  Keyboard.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Keyboard.h"


Keyboard::Keyboard( EventQueue *queue ){
    this->myQueue = queue;
}


void Keyboard::sendCMD(char c){
    this->myQueue->enterCMD(c);
}

void* Keyboard::runProcess(void* args){
    
    return NULL;
}
