#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float avg;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    avg = float(total)/3;

    if(avg >= 60)
    cout<< "A Grade";
    else if(avg<60 && avg>=35)
    cout<< "B Grade";
    else
    cout << "C Grade";
    return 0;
}