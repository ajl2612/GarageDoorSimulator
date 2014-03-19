//
//  Closed.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Closed__
#define __StateMachine__Closed__

#include <iostream>
#include "State.h"

class Closed : public State{
    
public:
    void onEntry();
    void onReEntry();
    void onExit();
    
};
#endif /* defined(__StateMachine__Closed__) */
