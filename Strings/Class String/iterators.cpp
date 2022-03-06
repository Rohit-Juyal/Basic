#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "today";

    string::reverse_iterator it;

    // for(it=str.begin();it!=str.end();it++)
    // {
    //     cout << *it;

    // }

    for(it = str.rbegin(); it!=str.rend(); it++)
    {
        cout << *it;
    }

// just using for loop (without iterator)

    for(int i = 0; str[i]!='\0'; i++)
    {
        cout << str[i];
    }

    return 0;
}