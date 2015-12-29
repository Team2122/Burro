#include <Subsystems/DriveShifter.h>
#include "Subsystems/OI.h"
#include "Robot.h"
#include "Subsystems/Drive.h"
#include <Commands/Subsystem.h>


DriveShifter::DriveShifter() :
	CommandBase("DriveShifter"){
		Requires(robot->drive);
	}


void DriveShifter::Execute(){
	robot->drive->SetLowGear();
}

bool DriveShifter::IsFinished(){
	return true;
}

void DriveShifter::End(){
	robot->drive->SetHighGear();
}

