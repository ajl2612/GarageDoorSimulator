/*
 * StateMachine.h
 *
 *  Created on: Mar 19, 2014
 *      Author: ajl2612
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_

#include "EventQueue.h"
#include "Closed.h"
#include "Closing.h"
#include "IdleClosing.h"
#include "Open.h"
#include "Opening.h"
#include "IdleOpening.h"
#include "Motor.h"
#include <pthread.h>


#define NUM_STATES 6


class StateMachine {
private:
    pthread_t io;
    bool done;
    int current_state;
    int last_state;
    EventQueue* myQueue;
    Motor* myMotor;
    Closed s0;
    Closing s1;
    Open s2;
    Opening s3;
    IdleClosing s4;
    IdleOpening s5;
    State *states[NUM_STATES];
    
    

public:
    void* runProcess(void);
	StateMachine(EventQueue* queue, Motor* m);
	virtual ~StateMachine();
};

#endif /* STATEMACHINE_H_ */
