#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Programming";
    string str2 = "Hello";
    // str.replace(3,4,"kk");

    // str.erase();

    str.push_back('z');
    str.pop_back();

    str.swap(str2);

    cout << str << endl;
    cout << str2;

    return 0;
}