#ifndef ROUTE_H
#define ROUTE_H

#include <bits/stdc++.h>

using namespace std;

class Route 
{
private:
    string name;
    string startPoint;
    string endPoint;
    double length;

public:
    Route();
    Route(string name, string startPoint, string endPoint, double length);
    Route(const Route& other);
    Route(string name);
    ~Route();

    void setName( string& newName);
    void setStartPoint( string& newStartPoint);
    void setEndPoint( string& newEndPoint);
    void setLength(double newLength);
    
    string getName();
    string getStartPoint() const;
    string getEndPoint() const;
    double getLength() const;

    void printInfo() const;
};

#endif 