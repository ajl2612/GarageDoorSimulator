//
//  Closing.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Closing.h"

Closing::Closing(){
    this->isBeamOn = false;
}

void Closing::onEntry(){
    NOP();
}
void Closing::onReEntry(){
    NOP();
}
void Closing::onExit(){
    NOP();
}


void Closing::enableIRBeam(){
    if( isBeamOn ){
        std::cout <<"Error: Beam engaged while beam currently on." << std::endl;
    }else{
        isBeamOn = true;
    }
}

void Closing::disableIRBeam(){
    if( !isBeamOn ){
        std::cout <<"Error: Beam disengaged while beam currently off." << std::endl;
    }else{
        isBeamOn = false;
    }
}