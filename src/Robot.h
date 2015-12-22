#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <IterativeRobot.h>

class Drive;
class Robot: public IterativeRobot {
public:
	Robot();

	Drive* drive;

	void RobotInit() override;

	void DisabledInit() override;
	void AutonomousInit() override;
	void TeleopInit() override;
	void TestInit() override;

	void DisabledPeriodic() override;
	void AutonomousPeriodic() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
};

#endif /* SRC_ROBOT_H_ */
