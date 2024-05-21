#include <iostream> 
#include "lab4/vector.h" 

using namespace std; 

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
