#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <IterativeRobot.h>

class Drive;
class OI;
class Scheduler;
class Robot: public IterativeRobot {
public:
	Robot();

	Drive* drive;
	OI* oi;

	void RobotInit() override;

	void DisabledInit() override;
	void AutonomousInit() override;
	void TeleopInit() override;
	void TestInit() override;

	void DisabledPeriodic() override;
	void AutonomousPeriodic() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	Scheduler* scheduler;
};

#endif /* SRC_ROBOT_H_ */
