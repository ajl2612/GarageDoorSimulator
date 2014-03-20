//
//  Closing.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Closing.h"

Closing::Closing( Motor* m){
    this->myMotor = m;
}

Closing::Closing(){
}

void Closing::setMotor( Motor* m){
    myMotor = m;
}

void Closing::onEntry(){
    printf("Entering Closing State\n");
    myMotor->enableMotorDown();
}
void Closing::onReEntry(){
    NOP();
}
void Closing::onExit(){
    myMotor->disengageMotor();
}

int Closing::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 4;
		break;
	case EVENT_IR:
		return 3;
		break;
	case EVENT_DOOROPEN:
		std::printf("No transition for DoorOpen event in Closing state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		return 0;
		break;
	case EVENT_MOTOROVERCURRENT:
		return 3;
		break;
	default:
		std::printf( "ERROR: no event definition for closing code:%d\n", event_id);
		return -1;

	}

	return -1;


}
