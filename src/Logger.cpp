#include <Logger.h>

#include "Timer.h"
#include <iostream>
#include <iomanip>

Logger::Logger(const std::string& loggerSource) {
	this->source = loggerSource;
}

void Logger::Info(const std::string& message) {
	this->LogMessage(message, "INFO");
}

void Logger::Warn(const std::string& message) {
	this->LogMessage(message, "WARN");
}

void Logger::Error(const std::string& message) {
	this->LogMessage(message, "ERROR");
}

void Logger::State(const std::string& message) {
	this->LogMessage(message, "STATE");
}

void Logger::LogMessage(const std::string& message, const std::string& level) {
	std::cout << std::fixed << std::setprecision(3) << std::setw(8)
			<< Timer::GetFPGATimestamp() << " [" << level << source << " - "
			<< message << std::endl;
}
