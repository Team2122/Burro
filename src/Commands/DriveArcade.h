
#ifndef SRC_COMMANDS_DRIVEARCADE_H_
#define SRC_COMMANDS_DRIVEARCADE_H_
#include "CommandBase.h"

class DriveArcade: public CommandBase {
public:
	DriveArcade();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif /* SRC_COMMANDS_DRIVEARCADE_H_ */
