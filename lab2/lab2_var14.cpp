#include <iostream>
#include <cmath>

using namespace std;

class Triangle 
{
private:
    double a, b, c;

public:
    Triangle(double sideA, double sideB, double sideC) : a(sideA), b(sideB), c(sideC) {}

    double getA() const { return a; }
    double getB() const { return b; }
    double getC() const { return c; }

    void setA(double sideA) { a = sideA; }
    void setB(double sideB) { b = sideB; }
    void setC(double sideC) { c = sideC; }

    double getPerimeter() const
    {
        return a + b + c;
    }

    double getArea() const
    {
        double s = getPerimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s -c));
    }
};

int main()
{
    Triangle triangle(3, 4, 5);
    cout << "Perimeter of triangle: " << triangle.getPerimeter() << endl
         << "Square of triangle: " << triangle.getArea() << endl;

    triangle.setA(9);
    cout << "New side of A: " << triangle.getA() << endl
         << "New Perimeter of triangle: " << triangle.getPerimeter() << endl
         << "New Square of triangle: " << triangle.getArea() << endl; 
}
