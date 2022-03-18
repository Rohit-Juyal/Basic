#include <iostream>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;

    friend void fun();
};

void fun()
{
    Test t;
    t.a = 10;          // a is private
    t.b = 5;           // b is protected
    t.c = 15;
}


// Friend function is a global function outside function which can access all the members of a class(private,protected,public) upon object.