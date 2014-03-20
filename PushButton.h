//
//  PushButton.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__PushButton__
#define __StateMachine__PushButton__

#include <iostream>
#include "Event.h"
class PushButton : public Event{
    
public:
    PushButton(std::string m, int id);
    std::string getMessage();
    int getID();
    
};

#endif /* defined(__StateMachine__PushButton__) */
