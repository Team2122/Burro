#include "Robot.h"

#include "CommandBase.h"
#include <iostream>
#include <HAL/HAL.hpp>
#include <Commands/Scheduler.h>
#include <Buttons/JoystickButton.h>

#include "Subsystems/Drive.h"
#include "Subsystems/OI.h"

#include "Commands/DriveTank.h"
#include "Commands/DriveLowGear.h"
#include "Commands/DriveHighGear.h"
#include "Commands/DriveShifter.h"

Robot::Robot() {
	// define robot pointer
	CommandBase::robot = this;
}

// robot init implementation
void Robot::RobotInit() {
	std::cout << "Entered RobotInit()" << std::endl;

	scheduler = Scheduler::GetInstance();

	drive = new Drive;
	oi = new OI;

	driveCommand = new DriveTank;
	driveLowGear = new DriveLowGear;
	driveHighGear = new DriveHighGear;
	driveShifter = new DriveShifter;

	oi->GetDriverButton(5)->WhenPressed(driveHighGear);
	oi->GetDriverButton(7)->WhenPressed(driveLowGear);
	oi->GetDriverButton(8)->WhileHeld(driveShifter);
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
	driveCommand->Start();
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
	scheduler->Run();
}

// teleop periodic implementation
void Robot::TeleopPeriodic() {
	scheduler->Run();
}

// test periodic implementation
void Robot::TestPeriodic() {
}

START_ROBOT_CLASS(Robot)
