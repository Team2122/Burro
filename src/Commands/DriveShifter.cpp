#include <Commands/DriveShifter.h>
#include "Subsystems/OI.h"
#include "Robot.h"
#include "Subsystems/Drive.h"
#include <Commands/Subsystem.h>


DriveShifter::DriveShifter() :
	CommandBase("DriveShifter"){
		Requires(robot->drive);
	}

void DriveShifter::Initialize(){
	CommandBase::Initialize();
	robot->drive->SetLowGear();
}

bool DriveShifter::IsFinished(){
	return false;
}

void DriveShifter::Interrupted(){
	CommandBase::Interrupted();
	robot->drive->SetHighGear();
}

void DriveShifter::Execute(){

}
