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

class Closing : public State{

private:
    bool isBeamOn;
    
    void enableIRBeam();
    void disableIRBeam();
    
public:
    Closing();
    void onEntry();
    void onReEntry();
    void onExit();
    
};
#endif /* defined(__StateMachine__Closing__) */
