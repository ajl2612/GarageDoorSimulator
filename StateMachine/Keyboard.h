//
//  Keyboard.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Keyboard__
#define __StateMachine__Keyboard__

#include <iostream>
#include "EventGenerator.h"

class Keyboard: public EventGenerator{
    
    Keyboard( EventQueue* queue);
    void sendCMD(char c);
    void* runProcess (void* arg);
};

#endif /* defined(__StateMachine__Keyboard__) */
