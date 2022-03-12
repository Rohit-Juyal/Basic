#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Non parameterised constructor
    Rectangle();

    // Parameterised costructor
    Rectangle(int l, int b);

    // Copy constructor
    Rectangle(Rectangle &r);

    // Mutators
    void setLength(int l);
    void setBreadth(int b);

    // Accessors
    int getLength();
    int grtBreadth();

    // Facilitators
    int area();
    int perimeter();

    // Inspector / enquiry
    int isSquare();

    // Distuctor
    ~Rectangle();
};