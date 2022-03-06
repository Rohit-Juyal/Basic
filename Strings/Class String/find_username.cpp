#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "john123@gmail.com";

    cout << "Username is " << email.substr(0,email.find('@'));

    return 0;
}