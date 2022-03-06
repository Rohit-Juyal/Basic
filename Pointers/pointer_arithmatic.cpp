#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p = A;
    int *q = &A[3];

    // p++;
    // p--;
    // p += 2;
    // p = p - 2;
    // d = q - p    (gives distance between two pointers)
    // d = p - q
    cout << *p;

    return 0;
}