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
    
private:
    void sendCMD(char c);
    void riasePushButtonEvent();
    void raiseSystemExitEvent();
    void raiseIREvent();
    
public:
    Keyboard( EventQueue *queue);
    void* runProcess (void* arg);

};

#endif /* defined(__StateMachine__Keyboard__) */
