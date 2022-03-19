#include <iostream>
using namespace std;

void fun(const int &a, int &b)
{
    cout << a << " " << b << endl;
    // a++;
}

int main()
{
    int x = 10;
    int y = 20;

    fun(x,y);

    cout << "Main " << x << " " << y;
}



// It will only use the values not modify them.