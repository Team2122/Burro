#ifndef SRC_SUBSYSTEMS_OI_H_
#define SRC_SUBSYSTEMS_OI_H_

#include "SubsystemBase.h"

class Joystick;
class JoystickButton;

class OI: public SubsystemBase {
public:
	OI();
	~OI();
	float GetLeftAxis();
	float GetRightAxis();
	float GetRightTurn();
	JoystickButton* GetDriverButton(uint32_t number);
private:
	Joystick* driverJoystick;

};

#endif /* SRC_SUBSYSTEMS_OI_H_ */
