#include <Joystick.h>
#include "OI.h"
OI::OI() :
		Subsystem("OI") {
	driverJoystick = new Joystick(0);

}
OI::~OI() {
	delete driverJoystick;

}

float OI::GetLeftAxis() {
	return driverJoystick->GetRawAxis(1);

}
float OI::GetRightAxis() {
	return driverJoystick->GetRawAxis(3);

}
