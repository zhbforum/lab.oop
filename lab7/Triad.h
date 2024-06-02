#ifndef TRIAD_H
#define TRIAD_H

#include <iostream>

class Triad 
{
protected:
    int a, b, c;

public:
    Triad(int a = 0, int b = 0, int c = 0);

    void increment();

    void display() const;
};

#endif 
