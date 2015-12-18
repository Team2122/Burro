#include "CommandBase.h"
#include <iostream>

Robot* CommandBase::robot = nullptr;

CommandBase::CommandBase(const char* name) :
		Command(name) {
}

void CommandBase::Initialize() {
	std::cout << GetName() << " command initialized" << std::endl;
}

void CommandBase::End() {
	std::cout << GetName() << " command ended" << std::endl;
}

void CommandBase::Interrupted() {
	std::cout << GetName() << " command interrupted" << std::endl;
}

