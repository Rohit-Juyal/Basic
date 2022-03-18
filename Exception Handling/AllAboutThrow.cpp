#include <iostream>
using namespace std;

class MyException
{

};

int division(int a, int b) 
{
    if(b == 0)
    throw MyException();
    return a/b;
}

int main()
{
    int x=10, y=0, z;

    try
    {
        z=division(x,y);
        cout << z << endl;
    }
    catch(MyException e)
    {
        cout << "Division by Zero " << endl;
    }
    cout << "Bye";
    
}