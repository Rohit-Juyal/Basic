#include <iostream>
using namespace std;

int swap(int *a, int *b)   
{
    cout << a << " " << b << endl;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;    
    swap(&x,&y);     
    cout << x << " " << y;   
}

//if you want any function to modify the actual parameters then you can go for call by address mechanism 
