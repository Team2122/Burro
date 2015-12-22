#include "Drive.h"
#include <Victor.h>

Drive::Drive() :
		Subsystem("Drive") {
	left1 = new Victor(0);
	left2 = new Victor(1);
	left3 = new Victor(2);
	right1 = new Victor(3);
	right2 = new Victor(4);
	right3 = new Victor(5);
}

Drive::~Drive() {
	delete left1;
	delete left2;
	delete left3;
	delete right1;
	delete right2;
	delete right3;
}

void Drive::SetSpeeds(float leftSpeed, float rightSpeed) {
	left1->Set(-leftSpeed);
	left2->Set(-leftSpeed);
	left3->Set(-leftSpeed);
	right1->Set(rightSpeed);
	right2->Set(rightSpeed);
	right3->Set(rightSpeed);
}

void Drive::ResetSpeeds() {
	SetSpeeds(0,0);
}
