
#ifndef SRC_SUBSYSTEMS_OI_H_
#define SRC_SUBSYSTEMS_OI_H_
class Joystick;
#include <Commands/Subsystem.h>
class OI: public Subsystem {
public:
	OI();
	~OI();
	float GetLeftAxis();
	float GetRightAxis();
private:
	Joystick* driverJoystick;

};

#endif /* SRC_SUBSYSTEMS_OI_H_ */
