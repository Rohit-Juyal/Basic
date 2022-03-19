#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    // const int *ptr = &x;
    int * const ptr = &x;            // Now we cannot move the pointer from variable X to variable y.

    // ++*ptr;
    int y = 10;
    ptr = &y;      // We can change the pointer to point on some other data member.

    cout << *ptr << " " << x;

}