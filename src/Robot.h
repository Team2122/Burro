#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <IterativeRobot.h>

class Robot: public IterativeRobot {
public:
	Robot();
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void AutonomousInit();
	virtual void TeleopInit();
	virtual void TestInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousPeriodic();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};


#endif /* SRC_ROBOT_H_ */
