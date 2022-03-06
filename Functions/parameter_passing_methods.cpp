// pass by value
// pass by address
// pass by reference

#include <iostream>
using namespace std;

int swap(int a, int b)   // formal paarameters
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;    
    swap(x,y);     // actual parameters
    cout << x << " " << y;

}

// if any changes are done inside the formal parameters will not change the actual parameters.