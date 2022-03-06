#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Welcome";

    // char str[10];

    // s.copy(str, s.length());

    // cout << str;

    string str = "Hello World";

    // cout << str.find("are") << endl;
    // cout << str.find("o") << endl;
    // cout << str.rfind("o") << endl;

    cout << str.find_first_of('l') << endl;
    cout << str.find_first_of('l', 3) << endl;
    cout << str.find_last_of('l') << endl;
    cout << str.find_first_of("le") << endl;

    return 0;
}