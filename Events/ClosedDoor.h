//
//  ClosedDoor.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__ClosedDoor__
#define __StateMachine__ClosedDoor__

#include <iostream>
#include "Event.h"
class ClosedDoor : public Event{
    
public:
    ClosedDoor(std::string m, int id);
    std::string getMessage();
    int getID();
    
};

#endif /* defined(__StateMachine__ClosedDoor__) */
