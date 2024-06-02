#include <iostream>
#include "Triad.h"
#include "Time.h"

using namespace std;

int main() 
{
    Triad t(2, 3, 5);
    t.display();
    t.increment();
    t.display();

    Time tm(23, 59, 58);
    tm.display();
    tm.increment();
    tm.display();
    tm.incrementSeconds(5);
    tm.display();
    tm.incrementMinutes(61);
    tm.display();

    return 0;
}
