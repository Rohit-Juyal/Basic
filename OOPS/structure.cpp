#include <iostream>
using namespace std;

struct Demo
{
    int x;
    int y;

    void display()
    {
        cout << x << " " << y;
    }
};

int main ()
{
    Demo d;
    d.x = 10;
    d.y = 9;
    d.display();
}


// Difference between class and structure

// In structure by default everything is public whereas in a class by default everything is private.