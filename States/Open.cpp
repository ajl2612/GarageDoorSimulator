//
//  Open.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Open.h"



void Open::onEntry(){
    NOP();
}
void Open::onReEntry(){
    NOP();
}
void Open::onExit(){
    NOP();
}

int Closing::transition(int event_id){

	switch( event_id_){

	case EVENT_PUSHBUTTON:
		return 5;
		break;
	case EVENT_IR:
		std::cout << "No transition for IR beam interrupt event in open state.\n";
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::cout << "No transition for DoorOpen event in open state.\n";
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::cout << "No transition for DoorClosed event in open state.\n";
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::cout << "No transition for DoorClosed event in open state.\n";
		return -1;
		break;
	default:
		printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
