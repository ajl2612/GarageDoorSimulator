//
//  Motor.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Motor.h"
#include <pthread.h>
#include <unistd.h>
#include "State.h"
#define DIR_RAISING 1
#define DIR_LOWERING 2
#define DIR_IDLE 0
pthread_t io;

int timer = 0;
int q = 1;
int r = 2;

int* up = &q;
int* down = &r;

int direction =0;

bool finished = false;


void* motorThreadHelper(void* args){
	return static_cast<Motor*>(args)->runProcess(NULL);
}

Motor::Motor( EventQueue *queue ){
    this->myQueue = queue;
    pthread_create(&io, NULL, &motorThreadHelper, this);
}



void Motor::raiseDoorOpenEvent(){
	sendCMD(EVENT_DOOROPEN);
}

void Motor::raiseDoorClosedEvent(){
	sendCMD(EVENT_DOORCLOSED);
}

void Motor::sendCMD(char c){
    this->myQueue->enterCMD(c);
}

void* Motor::runProcess(void* args){
	while (!finished){
		if (direction == DIR_RAISING){
			if(timer == 10){
				printf("DOOR is open...\n ");
				raiseDoorOpenEvent();
				direction = DIR_IDLE;
			}else {
				printf("DOOR opening is at...%d \n", timer);
				timer +=1;
				sleep(2);
			}
		}else if (direction == DIR_LOWERING){
			if (timer == 0){
				printf("DOOR is closed...\n ");
				raiseDoorClosedEvent();
				direction = DIR_IDLE;
			}else{
				printf("DOOR closing is at... %d \n", timer);
				timer -= 1;
				sleep(2);
			}
		}else {
			printf("not doing anything..\n");
			sleep (2);
		}
	}
	return NULL;
}


void Motor::enableMotorUp(){
	direction = DIR_RAISING;
	//done = false;
	//pthread_create(&io, NULL, countTimer, up);

}

void Motor::enableMotorDown(){
	direction = DIR_LOWERING;
    //done = false;
	//pthread_create(&io, NULL, countTimer, down);
}

void Motor::disengageMotor(){
	direction = DIR_IDLE;
	//done = true;
}

void Motor::shutDown(){
	finished = true;
}

