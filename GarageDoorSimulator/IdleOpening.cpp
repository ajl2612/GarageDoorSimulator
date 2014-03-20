/*
 * IdleRaising.cpp
 *
 *  Created on: Mar 19, 2014
 *      Author: nmc2484
 */

#include "IdleOpening.h"

#define noop ((void)0)



void IdleOpening::onEntry(){
    printf("Entering Idle Opening State\n");

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
		return 1;
		break;
	case EVENT_IR:
		std::printf("No transition for IR beam interrupt event in Idle Opening state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::printf( "No transition for DoorOpen event in Idle Opening state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::printf( "No transition for DoorClosed event in Idle Opening state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::printf("No transition for DoorClosed event in Idle Opening state.\n");
		return -1;
		break;
	default:
		std::printf( "ERROR: no event definition for idle Opening code:%d\n", event_id);
		return -1;

	}

	return -1;


}
