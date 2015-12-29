#include "Robot.h"
#include "DriveArcade.h"
#include "Subsystems/OI.h"
#include "Subsystems/Drive.h"

DriveArcade::DriveArcade() :
		CommandBase("DriveArcade") {
	Requires(robot->drive);
}

void DriveArcade::Initialize() {
	CommandBase::Initialize();
}

void DriveArcade::Execute() {
	float speed = -robot->oi->GetRightAxis();
	float turn = robot->oi->GetRightTurn();
	robot->drive->SetSpeeds(speed + turn, speed - turn);
}

bool DriveArcade::IsFinished() {
	return false;
}

void DriveArcade::End() {
	CommandBase::End();
	robot->drive->ResetSpeeds();
}

void DriveArcade::Interrupted() {
	CommandBase::Interrupted();
	robot->drive->ResetSpeeds();
}

