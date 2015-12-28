#include "CommandBase.h"
#include <iostream>

Robot* CommandBase::robot = nullptr;

CommandBase::CommandBase(const char* name) :
		Command(name), logger(name) {

}

void CommandBase::Initialize() {
	logger.Info(GetName() + " command initialized");
}

void CommandBase::End() {
	logger.Info(GetName() + " command ended");
}

void CommandBase::Interrupted() {
	logger.Info(GetName() + " command interrupted");
}

