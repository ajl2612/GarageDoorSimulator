/*
 * IdleOpening.h
 *
 *  Created on: Mar 19, 2014
 *      Author: nmc2484
 */

#ifndef __StateMachine__Idle__
#define __StateMachine__Idle__

#include <iostream>
#include "State.h"

class IdleOpening : public State{

public:
    void onEntry();
    void onReEntry();
    void onExit();
    int transition(int event_id );

};
#endif /* defined(__StateMachine__Idle__) */
