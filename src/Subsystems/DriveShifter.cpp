#include <Subsystems/DriveShifter.h>
#include "Subsystems/OI.h"
#include "Robot.h"
#include "Subsystems/Drive.h"
#include <Commands/Subsystem.h>


DriveShifter::DriveShifter() :
	CommandBase("DriveShifter"){
		Requires(robot->drive);
	}

void DriveShifter::Initialize(){
	robot->drive->SetLowGear();
}

bool DriveShifter::IsFinished(){
	return false;
}

void DriveShifter::Interrupted(){
	robot->drive->SetHighGear();
}

