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

class Opening : public State{
    
public:
    void onEntry();
    void onReEntry();
    void onExit();
    int transition(event_id);
    
};
#endif /* defined(__StateMachine__Opening__) */
