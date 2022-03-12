#include <iostream>
using namespace std;

class Test
{
public:
    void fun1()
    {
        cout << "Inline" << endl;
    }
    inline void fun2(); // by writing inline in front of a function we can make it inline function 
};

void Test::fun2()
{
    cout << "non-inline";
}

int main()
{
    Test t;
    t.fun1();
    t.fun2();
}