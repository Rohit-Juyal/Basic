#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Function of base" << endl;
    }
};

class Derived:public Base
{
public:
    void fun()
    {
        cout << "Function of derived";
    }
    
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun();
}

// When a base class function is declared as virtual, then the function call will not be based on the pointer it will be based on the object.