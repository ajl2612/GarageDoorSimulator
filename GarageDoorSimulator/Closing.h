//
//  Closing.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Closing__
#define __StateMachine__Closing__

#include <iostream>
#include "State.h"
#include "Motor.h"

class Closing : public State{
private:
    Motor* myMotor;
    
public:
    Closing();
    Closing( Motor* m);
    void onEntry();
    void onReEntry();
    void onExit();
    int transition( int event_id);
    void setMotor( Motor* m);
};
#endif /* defined(__StateMachine__Closing__) */
