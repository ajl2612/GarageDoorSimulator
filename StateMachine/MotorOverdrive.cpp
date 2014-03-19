//
//  MotorOverdrive.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "MotorOverdrive.h"

MotorOverdrive::MotorOverdrive(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string MotorOverdrive::getMessage(){
    return this-> message;
}


int MotorOverdrive::getID(){
    return this-> id;
}