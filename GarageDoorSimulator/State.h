//
//  State.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__State__
#define __StateMachine__State__

#define STATE_CLOSEDDOOR 0
#define STATE_CLOSINGDOOR 1
#define STATE_OPENDDOOR 2
#define STATE_OPENINGDOOR 3
#define STATE_IDLELOWERINGDOOR 4
#define STATE_IDLEROPENINGDOOR 5

#define EVENT_PUSHBUTTON 'p'
#define EVENT_IR 'i'
#define EVENT_DOOROPEN 'o'
#define EVENT_DOORCLOSED 'c'
#define EVENT_MOTOROVERCURRENT 'm'
#define EVENT_EXIT 'q'

#include <iostream>

class State{
protected:
    
    int stateID;
    std::string name;
    
public:
    int NOP();
    std::string getName();
    int getID();

    virtual int transition( int event_id ) = 0;
    virtual void onEntry() = 0;
    virtual void onReEntry() = 0;
    virtual void onExit() = 0;
};

#endif /* defined(__StateMachine__State__) */
