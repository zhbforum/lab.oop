#include "lab3/route.h"

Route::Route() : name("Unknown"), startPoint("A"), endPoint("B"), length(0.0) 
{
    cout << "Default constructor called" << endl;
}

Route::Route(string name, string startPoint, string endPoint, double length) 
: name(name), startPoint(startPoint), endPoint(endPoint), length(length) 
{
    cout << "Parameterized constructor call" << endl;
}

Route::Route(const Route& other) 
: name(other.name), startPoint(other.startPoint), endPoint(other.endPoint), length(other.length) 
{
    cout << "Copy constructor call" << endl;
}

Route::Route(string name) : Route(name, "A", "B", 0.0) 
{
    cout << "Delegating constructor call" << endl;
}

Route::~Route() 
{
    cout << "Destructor call for " << name << endl;
}

void Route::setName( string& newName) { name = newName; }
void Route::setStartPoint( string& newStartPoint) { startPoint = newStartPoint; }
void Route::setEndPoint( string& newEndPoint) { endPoint = newEndPoint; }
void Route::setLength(double newLength) { length = newLength; }

string Route::getName() { return name; }
string Route::getStartPoint()  { return startPoint; }
string Route::getEndPoint()  { return endPoint; }
double Route::getLength()  { return length; }

void Route::printInfo() const 
{
    cout << "Route: " << name << " from " << startPoint << " to " << endPoint << " is " << length << " km long." << endl;
}
