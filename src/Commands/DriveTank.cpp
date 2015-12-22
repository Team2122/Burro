#include "Robot.h"

#include "Subsystems/OI.h"
#include "Subsystems/Drive.h"
#include "DriveTank.h"

DriveTank::DriveTank() :
		CommandBase("DriveTank") {
	Requires(robot->drive);
}

void DriveTank::Initialize() {
	CommandBase::Initialize();
}

void DriveTank::Execute() {
	float leftSpeed = robot->oi->GetLeftAxis();
	float rightSpeed = robot->oi->GetRightAxis();
	robot->drive->SetSpeeds(-leftSpeed, -rightSpeed);
}

bool DriveTank::IsFinished() {
	return false;
}

void DriveTank::End() {
	CommandBase::End();
	robot->drive->ResetSpeeds();
}

void DriveTank::Interrupted() {
	CommandBase::Interrupted();
	robot->drive->ResetSpeeds();
}
