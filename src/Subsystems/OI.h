#ifndef SRC_SUBSYSTEMS_OI_H_
#define SRC_SUBSYSTEMS_OI_H_
class Joystick;
class JoystickButton;
#include <Commands/Subsystem.h>
class OI: public Subsystem {
public:
	OI();
	~OI();
	float GetLeftAxis();
	float GetRightAxis();
	float GetRightTurn();
	JoystickButton* GetDriverButton(uint32_t number);
private:
	Joystick* driverJoystick;
	JoystickButton* shiftButton;

};

#endif /* SRC_SUBSYSTEMS_OI_H_ */
