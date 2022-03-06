#include <iostream>
using namespace std;

int main()
{
    // char s[20];

    // cout << "Enter your name ";
    // cin >> s;

    // cout << s;

    char s[50];

    cout << "Enter your name ";
    // cin.get(s,50);
    cin.getline(s,50);
    cout << s;

    return 0;
}