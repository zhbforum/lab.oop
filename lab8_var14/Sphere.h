#ifndef SPHERE_H
#define SPHERE_H

#include "Solid.h"

class Sphere : public Solid 
{
private:
    double radius;

public:
    Sphere(double r);
    double volume() const override;
};

#endif
