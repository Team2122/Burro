#include <SubsystemBase.h>

SubsystemBase::SubsystemBase(const char* name) :
		Subsystem(name), logger(name) {
}
