//
//  Opening.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Opening__
#define __StateMachine__Opening__

#include <iostream>
#include "State.h"
#include "Motor.h"

class Opening : public State{
private:
    Motor* myMotor;
    
public:
    Opening( Motor* m);
    Opening();
    void onEntry();
    void onReEntry();
    void onExit();
    int transition(int event_id);
    void setMotor( Motor* m);
    
};
#endif /* defined(__StateMachine__Opening__) */
