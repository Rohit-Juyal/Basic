#include <iostream>
using namespace std;

int main()
{
    int A[7]={-7,-3,-5,-1,-9,-6,-2};
    int n=7, max;
    max=A[0];
    for(int i=1; i<7; i++)
    {
        if(A[i]>max)
        max = A[i];
    }
    cout << "Max is " << max;
    return 0;
}   