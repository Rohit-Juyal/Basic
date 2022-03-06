#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    str.append(" World");
    str.insert(3,"gg");
    // str.insert(3,"Apple",2);    (HelAplo)

    cout << str;

    return 0;
}