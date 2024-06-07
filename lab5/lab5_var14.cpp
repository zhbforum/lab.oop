#include "lab5/line.h"
#include <vector>
#include <iostream>

using namespace std;


Line::Line() : a(0), b(0) {}

Line::Line(double a, double b) : a(a), b(b) {}

Line::Line(const Line& other) : a(other.a), b(other.b) {}

Line::~Line() {}

double Line::operator[](int index) const
{
    if (index == 0) 
        return a;
    if (index == 1) 
        return b;
    throw out_of_range("Index out of range");
}

double Line::operator()(double x) const { return a * x + b; }

istream& operator>>(istream& is, Line& line)
{
    is >> line.a >> line.b;
    return is;
}

ostream& operator<<(ostream& os, const Line& line)
{
    os << "y = " << line.a << "x + " << line.b;
    return os;
}

int main()
{
    vector<Line*> lines;

    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        Line* line = new Line();
        cout << "Enter coefficients for line " << i + 1 << " (a and b): ";
        cin >> *line;
        lines.push_back(line);
    }
    
    cout << "\nLines entered:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Line " << i + 1 << ": " << *lines[i] << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        double x;
        cout << "Enter x for line " << i + 1 << ": ";
        cin >> x;
        cout << "y = " << (*lines[i])(x) << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        delete lines[i];
    }

    lines.clear();

    return 0;
}
