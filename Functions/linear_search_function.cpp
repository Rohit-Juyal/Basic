#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(key == A[i])
        return i;
    }
    return -1;
}

int main()
{
    int A[] = {2,4,5,7,9,3,19};

    int k;
    cout << "Enter an Element to be searched: ";
    cin >> k;

    int index = Search(A, 7, k);

    cout << "Element found at index: " << index;
}