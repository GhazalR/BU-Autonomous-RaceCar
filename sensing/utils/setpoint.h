//
// Created by Nicholas Arnold on 3/21/18.
//

#ifndef PID_SHARED_POS_H
#define PID_SHARED_POS_H

struct setpoint{
	float x_pos;
	float y_pos;
	float angle;

	float x_set; 
	float y_set; 
};
#endif //PID_SHARED_POS_H