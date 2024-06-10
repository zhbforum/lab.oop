#include <iostream>
#include "Triangle.h"
#include "Logger.h"

using namespace std;

int main() 
{
    Triangle t1(3.0, 4.0, 5.0, "Triangle1");
    Triangle t2(6.0, 8.0, 10.0, "Triangle2");

    Logger& logger = Logger::getInstance();
    logger.addRecord(t1);
    logger.addRecord(t2);

    logger.saveLog();

    return 0;
}
