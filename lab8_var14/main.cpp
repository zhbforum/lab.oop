#include <iostream>
#include "Cylinder.h"
#include "Sphere.h"

using namespace std;

int main()
{
    Cylinder cylinder(2.0, 3.0);
    Sphere sphere(3.0);

    cout << "Cylinder volume: " << cylinder.volume() << endl;
    cout << "Sphere volume: " << sphere.volume() << endl;

    return 0;
}
