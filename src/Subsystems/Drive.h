#ifndef SRC_SUBSYSTEMS_DRIVE_H_
#define SRC_SUBSYSTEMS_DRIVE_H_

#include <Commands/Subsystem.h>

class Victor;

class Drive: public Subsystem {
public:
	Drive();
	~Drive();

	void SetSpeeds(float leftSpeed, float rightSpeed);
	void ResetSpeeds();


private:
	Victor* left1;
	Victor* left2;
	Victor* left3;
	Victor* right1;
	Victor* right2;
	Victor* right3;
};

#endif /* SRC_SUBSYSTEMS_DRIVE_H_ */
