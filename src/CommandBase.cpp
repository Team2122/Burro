#include "CommandBase.h"
#include <iostream>

Robot* CommandBase::robot = nullptr;

CommandBase::CommandBase(const char* name) :
		Command(name), logger(name) {

}

void CommandBase::Initialize() {
	logger.State(GetName() + " command initialized");
}

void CommandBase::End() {
	logger.State(GetName() + " command ended");
}

void CommandBase::Interrupted() {
	logger.State(GetName() + " command interrupted");
}

