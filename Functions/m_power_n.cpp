#include <iostream>
using namespace std;

int pow(int x, int y)
{
    int z = 1;

    for(int i = 0; i < y; i++)
    {
        z*=x;
    }
    return z;
}

int main()
{
    int power = pow(2,5);
    cout << power;
}
