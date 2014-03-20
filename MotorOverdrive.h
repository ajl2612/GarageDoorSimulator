//
//  MotorOverdrive.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__MotorOverdrive__
#define __StateMachine__MotorOverdrive__

#include <iostream>
#include "Event.h"
class MotorOverdrive : public Event{
    
public:
    MotorOverdrive(std::string m, int id);
    std::string getMessage();
    int getID();
    
};

#endif /* defined(__StateMachine__MotorOverdrive__) */
