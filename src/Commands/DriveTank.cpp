#include "Robot.h"

#include "Subsystems/OI.h"
#include "Subsystems/Drive.h"
#include "DriveTank.h"
#include "DeadZone.h"

DriveTank::DriveTank() :
		CommandBase("DriveTank") {
	Requires(robot->drive);
}

void DriveTank::Initialize() {
	CommandBase::Initialize();
}

void DriveTank::Execute() {
	float leftSpeed = DeadZone(-robot->oi->GetLeftAxis(), .05);
	float rightSpeed = DeadZone(-robot->oi->GetRightAxis(), .05);
	robot->drive->SetSpeeds(leftSpeed, rightSpeed);
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
