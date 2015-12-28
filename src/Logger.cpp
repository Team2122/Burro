#include <Logger.h>

#include "Timer.h"
#include <iostream>

Logger::Logger(const std::string& loggerSource) {
	this->source = loggerSource;
}

void Logger::Info(const std::string& message) {
	std::cout << Timer::GetFPGATimestamp() << " [INFO] " << source << " - "
			<< message << std::endl;
}

void Logger::Warn(const std::string& message) {
	std::cout << Timer::GetFPGATimestamp() << " [WARN] " << source << " - "
			<< message << std::endl;
}

void Logger::Error(const std::string& message) {
	std::cout << Timer::GetFPGATimestamp() << " [ERROR] " << source << " - "
			<< message << std::endl;
}

void Logger::State(const std::string& message) {
	std::cout << Timer::GetFPGATimestamp() << " [STATE] " << source << " - "
			<< message << std::endl;
}
