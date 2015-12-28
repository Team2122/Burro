#include <Logger.h>

#include <iostream>

Logger::Logger(const std::string& loggerSource) {
	this->source = loggerSource;
}

void Logger::Info(const std::string& message) {
	std::cout << "Info: " << message << " (source " << source << ")"
			<< std::endl;
}

void Logger::Warning(const std::string& message) {
	std::cout << "Warning: " << message << " (source " << source << ")"
			<< std::endl;
}

void Logger::Error(const std::string& message) {
	std::cout << "Error: " << message << " (source " << source << ")"
			<< std::endl;
}
