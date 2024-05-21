#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector 
{
private:
    double x, y;

public:
    Vector(double x = 0.0, double y = 0.0);

    Vector& operator=(const Vector& other);

    Vector& operator--();

    friend Vector operator--(Vector& v, int);

    void print() const;

    friend double operator/(const Vector& v1, const Vector& v2);
};

#endif 
