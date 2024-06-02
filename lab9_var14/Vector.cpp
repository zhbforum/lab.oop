#include "Vector.h"


int& Vector::operator[](size_t index) { return data.at(index); }

size_t Vector::operator()() const { return data.size(); }

Vector& Vector::operator--() 
{
    if (!data.empty()) 
        data.erase(data.begin());
    return *this;
}

Vector Vector::operator--(int) 
{
    Vector temp = *this;
    if (!data.empty()) 
        data.pop_back();
    return temp;
}

void Vector::push_back(int value) 
{
    data.push_back(value);
}

void Vector::print() const 
{
    for (int val : data) 
        cout << val << " ";
    cout << endl;
}
