#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>

using namespace std;

class Vector 
{
private:
    vector<int> data;

public:
    int& operator[](size_t index);

    size_t operator()() const;

    Vector& operator--();

    Vector operator--(int);

    void push_back(int value);

    void print() const;
};

#endif 
