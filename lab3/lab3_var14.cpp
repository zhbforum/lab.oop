#include "lab3/route.h"

int main() 
{
    Route route1; 
    route1.printInfo();

    Route route2("Route 27", "Odessa", "Kharkov", 699); 
    route2.printInfo();

    Route route3 = route2; 
    route3.setName("Copy of Route 27");
    route3.printInfo();

    return 0;
}
