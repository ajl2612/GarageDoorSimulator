//
//  Closed.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Closed.h"

void Closed::onEntry(){
    NOP();
}
void Closed::onReEntry(){
    NOP();
}
void Closed::onExit(){
    NOP();
}

int Closed::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 4;
		break;
	case EVENT_IR:
		std::printf( "No transition for IR beam interrupt event in Closed state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::printf( "No transition for DoorOpen event in Closed state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::printf("No transition for DoorClosed event in Closed state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::printf("No transition for MotorOvercurrent event in Closed state.\n");

		return -1;
		break;
	default:
		std::printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
