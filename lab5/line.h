#ifndef LINE_H
#define LINE_H

#include <iostream>

using namespace std;

class Line
{
private:
    double a, b;

public:
    Line();

    Line(double a, double b);

    Line(const Line& other);

    ~Line();

    double operator[](int index) const;

    double operator()(double x) const;

    friend istream& operator>>(istream& is, Line& line);

    friend ostream& operator<<(ostream& os, const Line& line);
};

#endif 
