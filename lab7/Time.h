#ifndef TIME_H
#define TIME_H

#include "Triad.h"

class Time : public Triad 
{
public:
    Time(int hour = 0, int minute = 0, int second = 0);

    void increment();
    void incrementSeconds(int n);
    void incrementMinutes(int n);
    void display() const;
};

#endif 
