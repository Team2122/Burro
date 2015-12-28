#ifndef SRC_LOGGER_H_
#define SRC_LOGGER_H_

#include <string>

class Logger {
public:
	Logger(const std::string& loggerSource);
	void Info(const std::string& message);
	void Warn(const std::string& message);
	void Error(const std::string& message);
	void State(const std::string& message);
private:
	void LogMessage(const std::string& message, const std::string& level);
	std::string source;
};

#endif /* SRC_LOGGER_H_ */
