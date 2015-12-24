/**
 * @file DriveHighGear.h
 * @author Alex Mikhalev
 * @date Dec 24, 2015
 */

#ifndef SRC_COMMANDS_DRIVEHIGHGEAR_H_
#define SRC_COMMANDS_DRIVEHIGHGEAR_H_

#include <CommandBase.h>

class DriveHighGear: public CommandBase {
public:
	DriveHighGear();
	void Execute() override;
	bool IsFinished() override;
};

#endif /* SRC_COMMANDS_DRIVEHIGHGEAR_H_ */
