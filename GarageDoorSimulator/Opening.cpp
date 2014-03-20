//
//  Opening.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Opening.h"

Opening::Opening( Motor* m){
    this->myMotor = m;
}

Opening::Opening(){
}

void Opening::setMotor( Motor* m){
    myMotor = m;
}

void Opening::onEntry(){
    printf("Entering Opening State\n");
    myMotor->enableMotorUp();
}
void Opening::onReEntry(){
    NOP();
}
void Opening::onExit(){
    myMotor-> disengageMotor();
}

int Opening::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 5;
		break;
	case EVENT_IR:
		std::printf( "No transition for IR beam interrupt event in Opening state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		return 2;
		break;
	case EVENT_DOORCLOSED:
		std::printf( "No transition for opening event in Opening state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		return 4;
		break;
	default:
		std::printf( "ERROR: no event definition for opening code:%d\n", event_id);
		return -1;

	}

	return -1;


}
