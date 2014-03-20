/*
 * StateMachine.cpp
 *
 *  Created on: Mar 19, 2014
 *      Author: ajl2612
 */

#include "StateMachine.h"
#include <unistd.h>




void* machineHelper(void* args){
	return static_cast<StateMachine*>(args)->runProcess();
}

void* StateMachine::runProcess(void){
	printf("Starting state machine\n");
    char cmd;
    while (!done){
		if( !myQueue->empty() ){
            printf("In queue.......\n");

            //process first command in queue
            cmd = myQueue->frontCMD();
            myQueue->popCMD();
            printf("In queue........command = %c\n", cmd);

            if( cmd == 'q'){
                printf("Termination signal recieved at State Machine\n");
                done = true;
            }else{
                last_state = current_state;
                // minus one due to varible error, change later
                current_state = states[current_state]->transition(cmd);
                if(current_state == last_state){
                    //state has transitioned to itself
                    states[current_state] -> onReEntry();
                }
                else{
                    states[last_state] -> onExit();
                    states[current_state] -> onEntry();
                }
                printf("System now in state #%d\n", current_state);
            }
        }
        else{
            //wait for new commands
            sleep(1);
        }
	}
    printf("Terminating state machine\n");

	return NULL;
}


StateMachine::StateMachine(EventQueue* queue, Motor* m) {
	// TODO Auto-generated constructor stub
    this -> done  = false;
    this -> myQueue = queue;
    this -> current_state = STATE_CLOSEDDOOR;
    this -> last_state = STATE_CLOSEDDOOR;
    
    this -> myMotor =  m;
    
    //create states
    this->s0 = Closed();
    this->s1 = Closing();
    this->s2 = Open();
    this->s3 = Opening();
    this->s4 = IdleClosing();
    this->s5 = IdleOpening();
    
    //Set motor for motor dependent states
    s1.setMotor(m);
    s3.setMotor(m);

    
    //assign states into state vector
    states[0] = &s0;
    states[1] = &s1;
    states[2] = &s2;
    states[3] = &s3;
    states[4] = &s4;
    states[5] = &s5;
    
    pthread_create(&io, NULL, &machineHelper, this);
}

StateMachine::~StateMachine() {
	// TODO Auto-generated destructor stub
}


