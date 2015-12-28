#ifndef SRC_LOGGER_H_
#define SRC_LOGGER_H_

#include <string>

class Logger {
public:
	Logger(const std::string& loggerSource);
	void Info(const std::string& message);
	void Warning(const std::string& message);
	void Error(const std::string& message);
private:
	std::string source;
};

#endif /* SRC_LOGGER_H_ */
