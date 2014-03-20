//
//  IR.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__IR__
#define __StateMachine__IR__

#include <iostream>
#include "Event.h"
class IR : public Event{
    
public:
    IR(std::string m, int id);
    std::string getMessage();
    int getID();
    
};

#endif /* defined(__StateMachine__IR__) */
