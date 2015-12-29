#include <Joystick.h>
#include <Buttons/JoystickButton.h>
#include "OI.h"
#include <Buttons/JoystickButton.h>
#include "Subsystems/DriveShifter.h"
OI::OI() :
		Subsystem("OI") {
	driverJoystick = new Joystick(0);
	shiftButton = new JoystickButton(driverJoystick, 8);
}
OI::~OI() {
	delete driverJoystick;
	delete shiftButton;
}

float OI::GetLeftAxis() {
	return driverJoystick->GetRawAxis(1);

}
float OI::GetRightAxis() {
	return driverJoystick->GetRawAxis(3);
}

void WhileHeld(DriveShifter* execute){

}

float OI::GetRightTurn() {
	return driverJoystick->GetRawAxis(2);
}

JoystickButton* OI::GetDriverButton(uint32_t number) {
	return new JoystickButton(driverJoystick, number);
}
