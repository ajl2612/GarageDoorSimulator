//
//  Event.h
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#ifndef __StateMachine__Event__
#define __StateMachine__Event__

#include <iostream>
#include <string>


class Event{
    
protected:
    std::string message;
    int id;
    
public:
    virtual std::string getMessage() = 0;
    virtual int getID() = 0;
    
};

#endif /* defined(__StateMachine__Event__) */
