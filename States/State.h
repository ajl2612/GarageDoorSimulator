//
//  State.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__State__
#define __StateMachine__State__

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_

#define STATE_CLOSEDDOOR 1
#define STATE_CLOSINGDOOR 2
#define STATE_OPENDDOOR 3
#define STATE_OPENINGDOOR 4
#define STATE_IDLELOWERINGDOOR 5
#define STATE_IDLEROPENINGDOOR 6

#define EVENT_PUSHBUTTON 1
#define EVENT_IR 2
#define EVENT_DOOROPEN 3
#define EVENT_DOORCLOSED 4
#define EVENT_MOTOROVERDRIVE 5
#define EVENT_EXIT -1

#include <iostream>

class State{
protected:
    
    int stateID;
    std::string name;
    
public:
    int NOP();
    std::string getName();
    int getID();

    virtual void tansition( int EVENT_CODE );
    virtual void onEntry() = 0;
    virtual void onReEntry() = 0;
    virtual void onExit() = 0;
};

#endif /* defined(__StateMachine__State__) */
