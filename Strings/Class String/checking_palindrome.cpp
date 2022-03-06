#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "madam";
    string rev ="";

    int len = str.length();

    rev.resize(len);

    for(int i=0, j=len-1; i<len; i++,j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    if(str.compare(rev)==0)
    cout << "Palindrome";
    else
    cout << "Not a Palindrome";

    return 0;
}