#include <iostream>
using namespace std;

int main()
{
    float b, h, area;
    cout << "Enter base and height: ";
    cin >> b >> h;
    area = (b * h) / 2;
    cout << "Area of the triangle is: " <<  area;
    return 0;
}