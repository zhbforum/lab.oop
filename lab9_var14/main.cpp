#include "Vector.h"

int main() 
{
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.print();

    cout << "Size: " << v() << endl;

    cout << "Element at index 1: " << v[1] << endl;

    --v;
    v.print();

    v--;
    v.print();

    return 0;
}
