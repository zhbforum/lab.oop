#ifndef CYLINDER_H
#define CYLINDER_H

#include "Solid.h"

class Cylinder : public Solid
{
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h);
    double volume() const override;
};

#endif
