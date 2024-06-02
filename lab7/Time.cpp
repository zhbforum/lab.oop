#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) : Triad(hour, minute, second) {}

void Time::increment() 
{
    c++;
    if (c >= 60) 
    {
        c -= 60;
        b++;
    }

    if (b >= 60) 
    {
        b -= 60;
        a++;
    }

    if (a >= 24) 
    {
        a -= 24;
    }
}

void Time::incrementSeconds(int n) 
{
    c += n;
    while (c >= 60) 
    {
        c -= 60;
        b++;
    }

    while (b >= 60) 
    {
        b -= 60;
        a++;
    }

    while (a >= 24) 
    {
        a -= 24;
    }
}

void Time::incrementMinutes(int n) 
{
    b += n;
    while (b >= 60) 
    {
        b -= 60;
        a++;
    }
    while (a >= 24) 
    {
        a -= 24;
    }
}

void Time::display() const 
{
    cout << "Time: (" << a << " hours, " << b << " minutes, " << c << " seconds)" << endl;
}
