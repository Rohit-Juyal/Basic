#include <iostream>
using namespace std;

int swap(int &a, int &b)   
{
    cout << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;    
    swap(x,y);     
    cout << x << " " << y;

}

//So when do you call call by reference. 
//So whenever you want the actual parameters should be modified.