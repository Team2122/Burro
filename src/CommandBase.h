#ifndef SRC_COMMANDBASE_H_
#define SRC_COMMANDBASE_H_

#include <Commands/Command.h>
#include "Robot.h"

class CommandBase: public Command {

public:
	CommandBase(const char* name);
	static Robot* robot;
	virtual void Initialize() override;
	virtual void Execute() override = 0;
	virtual bool IsFinished() override = 0;
	virtual void End() override;
	virtual void Interrupted() override;
};

#endif /* SRC_COMMANDBASE_H_ */
