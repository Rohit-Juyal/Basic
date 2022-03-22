#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    // const int *ptr = &x;
    int * const ptr = &x;            // Now we cannot move the pointer from variable X to variable y. But we can cahnge the value of x

    const int * const ptr = &x;       // Now we cannot modify the data even you cannot move the pointer to any other variable.

    // ++*ptr;
    int y = 10;
    // ptr = &y;     

    cout << *ptr << " " << x;

}