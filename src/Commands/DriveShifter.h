/*
 * DriveShifter.h
 *
 *  Created on: Dec 28, 2015
 *      Author: John C
 */

#ifndef SRC_SUBSYSTEMS_DRIVESHIFTER_H_
#define SRC_SUBSYSTEMS_DRIVESHIFTER_H_

#include <CommandBase.h>

class DriveShifter: public CommandBase {
public:
	DriveShifter();
	void Initialize() override;
	bool IsFinished() override;
	void Interrupted() override;
	void Execute() override;
};

#endif /* SRC_SUBSYSTEMS_DRIVESHIFTER_H_ */
