//
//  ClosedDoor.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "ClosedDoor.h"

ClosedDoor::ClosedDoor(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string ClosedDoor::getMessage(){
    return this-> message;
}


int ClosedDoor::getID(){
    return this-> id;
}