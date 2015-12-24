/**
 * @file DriveLowGear.h
 * @author Alex Mikhalev
 * @date Dec 24, 2015
 */

#ifndef SRC_COMMANDS_DRIVELOWGEAR_H_
#define SRC_COMMANDS_DRIVELOWGEAR_H_

#include <CommandBase.h>

class DriveLowGear: public CommandBase {
public:
	DriveLowGear();
	void Execute() override;
	bool IsFinished() override;
};

#endif /* SRC_COMMANDS_DRIVELOWGEAR_H_ */
