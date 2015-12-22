/*
 * DriveTank.h
 *
 *  Created on: Dec 21, 2015
 *      Author: tony
 */

#ifndef SRC_COMMANDS_DRIVETANK_H_
#define SRC_COMMANDS_DRIVETANK_H_

#include <CommandBase.h>

class DriveTank: public CommandBase {
public:
	DriveTank();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif /* SRC_COMMANDS_DRIVETANK_H_ */
