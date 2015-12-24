/**
 * @file DriveLowGear.cpp
 * @author Alex Mikhalev
 * @date Dec 24, 2015
 */

#include "DriveLowGear.h"
#include "Subsystems/Drive.h"

DriveLowGear::DriveLowGear() :
		CommandBase("DriveLowGear") {
}

void DriveLowGear::Execute() {
	robot->drive->SetLowGear();
}

bool DriveLowGear::IsFinished() {
	return true;
}
