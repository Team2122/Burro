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

Robot::Robot() :
		logger("Robot") {
	// define robot pointer
	CommandBase::robot = this;
}

// robot init implementation
void Robot::RobotInit() {
	logger.Info("Initializing robot");

	scheduler = Scheduler::GetInstance();

	drive = new Drive;
	oi = new OI;

	driveCommand = new DriveTank;
	driveLowGear = new DriveLowGear;
	driveHighGear = new DriveHighGear;

	oi->GetDriverButton(5)->WhenPressed(driveHighGear);
	oi->GetDriverButton(7)->WhenPressed(driveLowGear);
}

// disabled init implementation
void Robot::DisabledInit() {
	logger.Info("Entering disabled mode");
}

// autonomous init implementation
void Robot::AutonomousInit() {
	logger.Info("Entering autonomous mode");
}

// teleop init implementation
void Robot::TeleopInit() {
	logger.Info("Entering teleop mode");
	driveCommand->Start();
}

// test init implementation
void Robot::TestInit() {
	logger.Info("Entering test mode");
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
