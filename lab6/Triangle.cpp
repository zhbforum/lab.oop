#include "Triangle.h"

int Triangle::instanceCount = 0;

Triangle::Triangle(double a, double b, double c, const std::string& name)
    : sideA(a), sideB(b), sideC(c), objectName(name) { instanceCount++; }

Triangle::~Triangle(){ instanceCount--; }

double Triangle::getSideA() const { return sideA; }
double Triangle::getSideB() const { return sideB; }
double Triangle::getSideC() const { return sideC; }
string Triangle::getName() const { return objectName; }
