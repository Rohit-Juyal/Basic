#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming";
    char s2[10] = "i";

    // cout<<strstr(s1,s2);

    cout << strchr(s1,'g') << endl;
    // cout << strrchr(s1,'g');     (from right side/end)


    return 0;
}