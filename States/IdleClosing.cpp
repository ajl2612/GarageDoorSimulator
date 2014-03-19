//
//  Idle.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "IdleClosing.h"
#define noop ((void)0)



void Idle::onEntry(){
    NOP();
}
void Idle::onReEntry(){
    NOP();
}
void Idle::onExit(){
    NOP();
}

int Closing::transition(int event_id){

	switch( event_id_){

	case EVENT_PUSHBUTTON:
		return 4;
		break;
	case EVENT_IR:
		std::cout << "No transition for IR beam interrupt event in Idle state.\n";
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::cout << "No transition for DoorOpen event in Idle state.\n";
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::cout << "No transition for DoorClosed event in Idle state.\n";
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::cout << "No transition for DoorClosed event in Idle state.\n";
		return -1;
		break;
	default:
		printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
