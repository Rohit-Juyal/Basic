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
