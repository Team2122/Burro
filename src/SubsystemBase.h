#ifndef SRC_SUBSYSTEMBASE_H_
#define SRC_SUBSYSTEMBASE_H_

#include <Commands/Subsystem.h>
#include "Logger.h"

class SubsystemBase: public Subsystem {
public:
	SubsystemBase(const char* name);
private:
	Logger logger;
};

#endif /* SRC_SUBSYSTEMBASE_H_ */
