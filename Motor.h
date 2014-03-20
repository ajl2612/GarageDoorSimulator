//
//  Motor.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Motor__
#define __StateMachine__Motor__

#include <iostream>
#include "EventGenerator.h"

class Motor: public EventGenerator{
private:
    void sendCMD(char c);
    void raiseDoorOpenEvent();
    void raiseDoorClosedEvent();
    
public:
    Motor( EventQueue* queue);
    void* runProcess (void);
    void enableMotorUp();
    void enableMotorDown();
    void disengageMotor();
    
    void raiseMotorOverdriveEvent();
    void shutDown();

    
    
};

#endif /* defined(__StateMachine__Motor__) */
