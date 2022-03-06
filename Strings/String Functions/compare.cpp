#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "hello";
    char s2[20] = "Hello";

    cout << strcmp(s1,s2);

    return 0;
}