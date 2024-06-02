#include "Triad.h"

using namespace std;

Triad::Triad(int a, int b, int c) : a(a), b(b), c(c) {}

void Triad::increment() 
{
    a++;
    b++;
    c++;
}

void Triad::display() const 
{
    cout << "Triad: (" << a << ", " << b << ", " << c << ")" << endl;
}
