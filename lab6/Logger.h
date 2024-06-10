#ifndef LOGGER_H
#define LOGGER_H

#include <vector>
#include <string>
#include "Triangle.h"

class Logger 
{
public:
    static Logger& getInstance();

    void addRecord(const Triangle& triangle);

    void saveLog();

private:
    Logger() {}

    vector<string> log;
};

#endif 
