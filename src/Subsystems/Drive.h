#ifndef SRC_SUBSYSTEMS_DRIVE_H_
#define SRC_SUBSYSTEMS_DRIVE_H_

#include <Commands/Subsystem.h>

class Victor;
class DoubleSolenoid;
class Encoder;

class Drive: public Subsystem {
public:
	Drive();
	~Drive();

	void SetSpeeds(float leftSpeed, float rightSpeed);
	void ResetSpeeds();
	void SetHighGear();
	void SetLowGear();
	double GetDistanceTraveled();
	void ResetEncoders();

private:
	Victor* left1;
	Victor* left2;
	Victor* left3;
	Victor* right1;
	Victor* right2;
	Victor* right3;
	DoubleSolenoid* gearSolenoid;
	Encoder* leftEncoder;
	Encoder* rightEncoder;
};

#endif /* SRC_SUBSYSTEMS_DRIVE_H_ */
