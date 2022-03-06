#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;

    cout << "Enter a, b and c ";
    cin >> a >> b >> c;
    d = b*b -4*a*c;

    if(d==0){
        cout << "roots are real and equal" << endl;
        r1 = -b/(2*a);
        cout<<r1;
    }

    else{
        if (d>0)
    {
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal"<<endl;
        cout<< r1<<endl;
        cout<< r2;
    }
    else{
        cout<<"Imaginary";
    }
    }  
    return 0;
}
