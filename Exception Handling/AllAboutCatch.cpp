#include <iostream>
using namespace std;

class MyException1: exception
{

};
class MyException2:public MyException1
{

};
int main()
{
    try
    {
        throw MyException1();
    }
    catch(MyException2 e)
    {
        cout << "Int catch" << endl;
    }
    
    catch(MyException1 e)
    {
        cout << "Double catch" << endl;
    }
    catch(...)
    {
        cout << "All catch" << endl;
    }

}


// We can have multiple catch blocks.
// (...)  -> catch all(catch block for all type of exceptions).
// Catch all block must be the last block.
// We can do nesting of try and catch block.