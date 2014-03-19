//
//  IR.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "IR.h"

IR::IR(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string IR::getMessage(){
    return this-> message;
}


int IR::getID(){
    return this-> id;
}