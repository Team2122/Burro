#include <Joystick.h>
#include <Buttons/JoystickButton.h>
#include "OI.h"
OI::OI() :
		SubsystemBase("OI") {
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

float OI::GetRightTurn() {
	return driverJoystick->GetRawAxis(2);
}

JoystickButton* OI::GetDriverButton(uint32_t number) {
	return new JoystickButton(driverJoystick, number);
}
