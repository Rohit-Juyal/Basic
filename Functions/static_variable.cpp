// So yes static variables are the variables which remains always in the memory. They are just like a global Variable. Only the difference between global and static variable is global variable can be access in any function, static variable are accessible only inside the function in which they are declared.

#include <iostream>
using namespace std;

void fun()
{
    static int s = 10;
    s++;
    cout << s << endl;
}

int main()
{
    fun();
    fun();
    fun();
}