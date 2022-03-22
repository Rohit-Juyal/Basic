#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 20;

    void display() const
    {
        // x++;
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.display();
}

// So the properties or the data members of the class become read only for this function so the constant functions cannot modify the data members of a class.