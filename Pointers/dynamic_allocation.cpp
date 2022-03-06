#include <iostream>
using namespace std;

int main()
{
    int *p = new int[20];


    delete []p;
    p = NULL;
    p = 0;
    p = nullptr;

    p = new int[40];


    return 0;
}