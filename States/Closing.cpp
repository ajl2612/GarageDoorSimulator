//
//  Closing.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Closing.h"

void Closing::onEntry(){
    NOP();
}
void Closing::onReEntry(){
    NOP();
}
void Closing::onExit(){
    NOP();
}

int Closing::transition(int event_id){

	switch( event_id_){

	case EVENT_PUSHBUTTON:
		return 5;
		break;
	case EVENT_IR:
		return 4;
		break;
	case EVENT_DOOROPEN:
		std::cout << "No transition for DoorOpen event in Closing state.\n";
		return -1;
		break;
	case EVENT_DOORCLOSED:
		return 1;
		break;
	case EVENT_MOTOROVERCURRENT:
		return 4;
		break;
	default:
		printf( "ERROR: no event definition for event code:%d\n", event_id);
		return -1;

	}

	return -1;


}
