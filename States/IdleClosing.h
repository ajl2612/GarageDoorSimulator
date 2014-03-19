//
//  Idle.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Idle__
#define __StateMachine__Idle__

#include <iostream>
#include "State.h"

class Idle : public State{

public:
    void onEntry();
    void onReEntry();
    void onExit();
    int transition(int event_id);
    
};
#endif /* defined(__StateMachine__Idle__) */
