//
//  EventQueue.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__EventQueue__
#define __StateMachine__EventQueue__

#include <iostream>
#include <queue>
#include "../Utils/mutex.h"

class EventQueue{
    
private:
    std::queue<char> cmdQueue;
    PThreads::Mutex mtx;
    
public:
    EventQueue();
    void enterCMD(char cmd);
    char frontCMD();
    void popCMD();

};

#endif /* defined(__StateMachine__EventQueue__) */
