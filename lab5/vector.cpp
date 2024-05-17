#include "lab5/vector.h"
#include <cmath>

using namespace std;

Vector::Vector(double x, double y) : x(x), y(y) {}

Vector& Vector::operator=(const Vector& other) 
{
    if (this != &other) 
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Vector& Vector::operator--() 
{
    x--;
    y--;
    return *this;
}

Vector operator--(Vector& v, int) 
{
    Vector temp = v;
    v.x--;
    v.y--;
    return temp;
}

void Vector::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

double operator/(const Vector& v1, const Vector& v2) 
{
    double dotProduct = v1.x * v2.x + v1.y * v2.y;
    double magnitudeV1 = sqrt(v1.x * v1.x + v1.y * v1.y);
    double magnitudeV2 = sqrt(v2.x * v2.x + v2.y * v2.y);
    double angle = acos(dotProduct / (magnitudeV1 * magnitudeV2));
    return angle * (180.0 / M_PI);
}
