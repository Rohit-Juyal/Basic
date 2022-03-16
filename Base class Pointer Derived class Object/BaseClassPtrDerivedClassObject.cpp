#include <iostream>
using namespace std;

class Base
{
public:
    void fun1();
    void fun2();
    void fun3();
};

class Derived:public Base{
public:
    void fun4();
    void fun5();
};

int main()
{
    Base *p;
    p = new Derived();
    
    p->fun1();
    p->fun2();
    p->fun3();
    // p->fun4();     error
    // p->fun5();     error
}

// If you have base class pointer and derived class object assigned to it then you can call only those functions which are present in base class.
// We can not take the pointer of derived class and have an object of base class.