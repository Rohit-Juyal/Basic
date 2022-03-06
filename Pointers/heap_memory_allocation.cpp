// Heap

#include <iostream>
using namespace std;

int main()
{
    // Stack
    int A[5] = {1,2,3,4,5};

    // Heap
    int *p = new int[5];  // new array is created in heap

    p[0] = 15;
    p[1] = 13;

    cout << p[1];
    return 0;
}