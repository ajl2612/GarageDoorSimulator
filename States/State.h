//
//  State.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__State__
#define __StateMachine__State__

#include <iostream>

class State{
protected:
    
    int stateID;
    std::string name;
    
public:
    int NOP();
    std::string getName();
    int getID();
    virtual void onEntry() = 0;
    virtual void onReEntry() = 0;
    virtual void onExit() = 0;
};

#endif /* defined(__StateMachine__State__) */
