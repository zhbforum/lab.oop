#include <iostream>
#include <cmath>

using namespace std;

class Vector 
{
private:
    double x, y;

public:
    Vector(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    Vector& operator=(const Vector& other) 
    {
        if (this != &other) 
        {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

    Vector& operator--() 
    {
        x--;
        y--;
        return *this;
    }

    friend Vector operator--(Vector& v, int);

    void print() const 
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    friend double operator/(const Vector& v1, const Vector& v2);
};

Vector operator--(Vector& v, int) 
{
    Vector temp = v;
    v.x--;
    v.y--;
    return temp;
}

double operator/(const Vector& v1, const Vector& v2) 
{
    double dotProduct = v1.x * v2.x + v1.y * v2.y;
    double magnitudeV1 = sqrt(v1.x * v1.x + v1.y * v1.y);
    double magnitudeV2 = sqrt(v2.x * v2.x + v2.y * v2.y);
    double angle = acos(dotProduct / (magnitudeV1 * magnitudeV2));
    return angle * (180.0 / M_PI); 
}

int main() 
{
    Vector v1(3, 4), v2(1, 4);
    Vector v3;
    v3 = v1;
    cout << "Vector v1: ";
    v1.print();
    cout << "Vector v3 after assignment: ";
    v3.print();

    --v1;
    cout << "Vector v1 after prefix decrement: ";
    v1.print();

    v1--;
    cout << "Vector v1 after postfix decrement: ";
    v1.print();

    double angle = v1 / v2;
    cout << "Angle between v1 and v2: " << angle << " degrees" << endl;

    return 0;
}
