#include <iostream>
using namespace std;

int swap(int a, int b)   
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
    cout << x << " " << y;    //And finally it is displaying the values of x and y they remain same.

}
// So who will get swap the variables a and b values and get swap actual parameters that are x and y will  not get modified.

// So in call by value mechanism the value of the formal parameters if they are modified they will not reflect into actual parameters.