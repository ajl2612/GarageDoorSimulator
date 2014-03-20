//
//  Open.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Open.h"



void Open::onEntry(){
    printf("Entering Open State\n");

    NOP();
}
void Open::onReEntry(){
    NOP();
}
void Open::onExit(){
    NOP();
}

int Open::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 1;
		break;
	case EVENT_IR:
		std::printf("No transition for IR beam interrupt event in open state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::printf( "No transition for DoorOpen event in open state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::printf( "No transition for DoorClosed event in open state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::printf( "No transition for DoorClosed event in open state.\n");
		return -1;
		break;
	default:
		std::printf( "ERROR: no event definition for open code:%d\n", event_id);
		return -1;

	}

	return -1;


}
