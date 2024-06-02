#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>

using namespace std;

class Triangle 
{
public:
    static int instanceCount;

    Triangle(double a, double b, double c, const std::string& name);

    ~Triangle();

    double getSideA() const;
    double getSideB() const;
    double getSideC() const;
    string getName() const;

private:
    double sideA, sideB, sideC;
    string objectName; 
};

#endif 
