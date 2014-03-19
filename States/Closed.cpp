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

	switch( event_id_){

	case EVENT_PUSHBUTTON:
		return 4;
		break;
	case EVENT_IR:
		std::cout << "No transition for IR beam interrupt event in Closed state.\n";
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::cout << "No transition for DoorOpen event in Closed state.\n";
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::cout << "No transition for DoorClosed event in Closed state.\n";
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::cout << "No transition for MotorOvercurrent event in Closed state.\n";

		return -1;
		break;
	default:
		printf( "ERROR: no event definition for event code:%d\n", event_id);
		return -1;

	}

	return -1;


}
