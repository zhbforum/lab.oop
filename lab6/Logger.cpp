#include "Logger.h"
#include <fstream>
#include <ctime>

using namespace std;


Logger& Logger::getInstance() 
{
    static Logger instance;
    return instance;
}

void Logger::addRecord(const Triangle& triangle) 
{
    string record = "Name: " + triangle.getName() +
                        " SideA: " + to_string(triangle.getSideA()) +
                        " SideB: " + to_string(triangle.getSideB()) +
                        " SideC: " + to_string(triangle.getSideC());
    log.push_back(record);
}


void Logger::saveLog() 
{
    ofstream file;
    time_t now = time(0);
    tm *ltm = localtime(&now);

    file.open("log.txt");

    file << "ClassName: Triangle\n";
    file << "Number of Entities: " << Triangle::instanceCount << "\n";
    file << "Time: " << 1900 + ltm -> tm_year << "."
         << 1 + ltm -> tm_mon << "."
         << ltm -> tm_mday << " "
         << ltm -> tm_hour << ":"
         << ltm -> tm_min << ":"
         << ltm -> tm_sec << "\n";

    for (const auto& record : log) 
    {
        file << record << "\n";
    }

    file.close();
}

