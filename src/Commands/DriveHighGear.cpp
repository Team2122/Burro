/**
 * @file DriveHighGear.cpp
 * @author Alex Mikhalev
 * @date Dec 24, 2015
 */

#include "DriveHighGear.h"
#include "Subsystems/Drive.h"

DriveHighGear::DriveHighGear() :
		CommandBase("DriveHighGear") {
}

void DriveHighGear::Execute() {
	robot->drive->SetHighGear();
}

bool DriveHighGear::IsFinished() {
	return true;
}
