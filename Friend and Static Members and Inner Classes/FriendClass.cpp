#include <iostream>
using namespace std;

class Your;

class My
{
private:
    int a;
protected:
    int b;
public:
    int c; 
    friend Your; 
};

class Your
{
public:
    My m;
    void fun()
    {
        m.a = 10;
        m.b = 18;
        m.c = 5;
    }
};

int main()
{

}

// If you want your class to access the private and protected members of My class, then you must declare your class as a friend inside My class.