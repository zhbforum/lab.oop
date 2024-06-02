#include "Sphere.h"
#include <cmath>

Sphere::Sphere(double r) : radius(r) {}

double Sphere::volume() const
{
    return (4.0 / 3.0) * M_PI * radius * radius * radius;
}
