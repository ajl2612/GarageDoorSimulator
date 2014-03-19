/*
 * IdleRaising.cpp
 *
 *  Created on: Mar 19, 2014
 *      Author: nmc2484
 */

#include "IdleOpening.h"

#define noop ((void)0)



void IdleOpening::onEntry(){
    NOP();
}
void IdleOpening::onReEntry(){
    NOP();
}
void IdleOpening::onExit(){
    NOP();
}

int IdleOpening::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 2;
		break;
	case EVENT_IR:
		std::printf("No transition for IR beam interrupt event in Idle state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::printf( "No transition for DoorOpen event in Idle state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::printf( "No transition for DoorClosed event in Idle state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::printf("No transition for DoorClosed event in Idle state.\n");
		return -1;
		break;
	default:
		std::printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
