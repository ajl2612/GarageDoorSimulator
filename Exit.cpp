//
//  Exit.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Exit.h"

Exit::Exit(std::string message, int id){
    
    this->message = message;
    this->id = id;
    
}

std::string Exit::getMessage(){
    return this-> message;
}


int Exit::getID(){
    return this-> id;
}