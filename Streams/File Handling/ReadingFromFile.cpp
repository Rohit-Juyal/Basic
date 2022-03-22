#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream ifs("My.txt");
    ifstream ifs;
    ifs.open("My.txt");

    if(ifs.is_open())
    cout << "File is Opened" << endl;
    string s;
    int x;

    ifs >> s >> x;
    ifs.close();

    cout << s << endl;
    cout << x << endl;
}