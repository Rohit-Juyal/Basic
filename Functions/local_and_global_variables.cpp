#include <iostream>
using namespace std;

int g = 0;      // global variable

void fun()
{
    int a = 5;  // local variable
    g = g + a;
    cout << g << endl;
}

int main()
{
    int x = 10;  // local variable
    g = 15;
    fun();
    g++;
    cout << g << endl;
}