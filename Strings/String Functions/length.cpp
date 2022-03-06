#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];

    cout << "Enter a string ";
    cin.getline(s,100);

    cout << strlen(s);

    // char s[40] = "Hello World";

    // cout << strlen(s);

    return 0;
}