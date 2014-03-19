//
//  Exit.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Exit__
#define __StateMachine__Exit__

#include <iostream>
#include "Event.h"
class Exit : public Event{
    
public:
    Exit(std::string m, int id);
    std::string getMessage();
    int getID();
    
};
#endif /* defined(__StateMachine__Exit__) */
