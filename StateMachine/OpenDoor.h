//
//  OpenDoor.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__OpenDoor__
#define __StateMachine__OpenDoor__

#include <iostream>
#include "Event.h"
class OpenDoor : public Event{
    
public:
    OpenDoor(std::string m, int id);
    std::string getMessage();
    int getID();
    
};

#endif /* defined(__StateMachine__OpenDoor__) */
