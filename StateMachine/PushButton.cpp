//
//  PushButton.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "PushButton.h"

PushButton::PushButton(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string PushButton::getMessage(){
    return this-> message;
}


int PushButton::getID(){
    return this-> id;
}