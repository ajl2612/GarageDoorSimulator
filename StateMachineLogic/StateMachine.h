/*
 * StateMachine.h
 *
 *  Created on: Mar 19, 2014
 *      Author: ajl2612
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_
#define STATE_CLOSEDDOOR 1
#define STATE_CLOSINGDOOR 2
#define STATE_OPENDDOOR 3
#define STATE_OPENINGDOOR 4
#define STATE_IDLEDOOR 5

#define EVENT_PUSHBUTTON 1
#define EVENT_IR 2
#define EVENT_DOOROPEN 3
#define EVENT_DOORCLOSED 4
#define EVENT_MOTOROVERDRIVE 5
#define EVENT_EXIT -1

class StateMachine {
public:
	StateMachine();
	virtual ~StateMachine();
};

#endif /* STATEMACHINE_H_ */
