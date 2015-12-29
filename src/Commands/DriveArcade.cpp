#include "Robot.h"
#include "DriveArcade.h"
#include "Subsystems/OI.h"
#include "Subsystems/Drive.h"
#include "DeadZone.h"

DriveArcade::DriveArcade() :
		CommandBase("DriveArcade") {
	Requires(robot->drive);
}

void DriveArcade::Initialize() {
	CommandBase::Initialize();
}

void DriveArcade::Execute() {
	float speed = DeadZone(-robot->oi->GetRightAxis(), .05);
	float turn = DeadZone(robot->oi->GetRightTurn(), .05);
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

