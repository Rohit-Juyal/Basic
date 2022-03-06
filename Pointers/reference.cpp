// Reference

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;    //y is alias or nickname of x

    // once a reference is created it can not be changed at all

    // x++;
    // y++;

    // cout << x;
    // cout << y;

    int a;

    a = x;   // r-value
    x = 25;  // l-value
}