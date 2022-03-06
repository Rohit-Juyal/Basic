#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum = 0, average;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum/n;
    cout << "Average is " << average;

    return 0;
    
}
