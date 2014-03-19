//
//  State.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "State.h"

std::string State::getName(){
    return name;
}

int State::getID(){
    return stateID;
}
int State::NOP(){
    return 1;
}
