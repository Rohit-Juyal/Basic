// First one If a base class is having all the concrete function, then the purpose of that base class means for the child classes, for the child classes we are talking about then reusability. It can borrow all the features.

// Second one, some concrete function, some virtual function means the base classes for reusability also borrow the features also and also achieving polymorphism.

// Third one If all base classes having all the pure virtual function means the only purpose of that base class is to achieve polymorphism and such a base class. We can call it as interface.

// Abstract classes - If a class is having pure virtual function then it is known as abstract class. 

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};
    
class Derived :public Base
{
    public:
    void fun1()
    {
        cout<<"fun1 of Derived"<<endl;
    }  
                
    void fun2()
    {
        cout<<"fun2 of Derived"<<endl;
    }

};
    
int main()
{
    Derived d;
    d.fun1();
    d.fun2();

} 
    