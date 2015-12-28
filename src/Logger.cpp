#include <Logger.h>

#include "Timer.h"
#include <iostream>
#include <iomanip>

Logger::Logger(const std::string& loggerSource) {
	this->source = loggerSource;
}

void Logger::Info(const std::string& message) {
	std::cout << std::fixed << std::setprecision(3) << std::setw(8)
			<< Timer::GetFPGATimestamp() << " [INFO] " << source << " - "
			<< message << std::endl;
}

void Logger::Warn(const std::string& message) {
	std::cout << std::fixed << std::setprecision(3) << std::setw(8)
			<< Timer::GetFPGATimestamp() << " [WARN] " << source << " - "
			<< message << std::endl;
}

void Logger::Error(const std::string& message) {
	std::cout << std::fixed << std::setprecision(3) << std::setw(8)
			<< Timer::GetFPGATimestamp() << " [ERROR] " << source << " - "
			<< message << std::endl;
}

void Logger::State(const std::string& message) {
	std::cout << std::fixed << std::setprecision(3) << std::setw(8)
			<< Timer::GetFPGATimestamp() << " [STATE] " << source << " - "
			<< message << std::endl;
}
