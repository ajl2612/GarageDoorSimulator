//
//  EventGenerator.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__EventGenerator__
#define __StateMachine__EventGenerator__

#include <iostream>
#include "EventQueue.h"

class EventGenerator{

protected:
    EventQueue *myQueue;
    virtual void sendCMD(char c) = 0;

public:
        //virtual void* runProcess (void* arg) = 0;
};
#endif /* defined(__StateMachine__EventGenerator__) */       
