#include "Robot.h"
#include "stdio.h"
#include <HAL/HAL.hpp>

Robot::Robot() {
}

// robot init implementation
void Robot::RobotInit() {
	std::cout << "Entered RobotInit()" << std::endl;
}

// disabled init implementation
void Robot::DisabledInit() {
	std::cout << "Entered DisabledInit()" << std::endl;
}

// autonomous init implementation
void Robot::AutonomousInit() {
	std::cout << "Entered AutonomousInit()" << std::endl;
}

// teleop init implementation
void Robot::TeleopInit() {
	std::cout << "Entered TeleopInit()" << std::endl;
}

// test init implementation
void Robot::TestInit() {
	std::cout << "Entered TestInit()" << std::endl;
}

// disabled periodic implementation
void Robot::DisabledPeriodic() {
}

// autonomous periodic implementation
void Robot::AutonomousPeriodic() {
}

// teleop periodic implementation
void Robot::TeleopPeriodic() {
}

// test periodic implementation
void Robot::TestPeriodic() {
}

START_ROBOT_CLASS(Robot)
