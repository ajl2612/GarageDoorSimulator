//
//  OpenDoor.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "OpenDoor.h"

OpenDoor::OpenDoor(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string OpenDoor::getMessage(){
    return this-> message;
}


int OpenDoor::getID(){
    return this-> id;
}