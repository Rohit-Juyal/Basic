#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0;      // pure virtual function
    
    virtual void stop() = 0;       // pure virtual function
};

class Innova:public Car
{
public:
    void start()
    {
        cout << "Innova started" << endl;
    }
    void stop()
    {
        cout << "Innova stoped" << endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout << "Swift started" << endl;
    }
    void stop()
    {
        cout << "Swift stoped" << endl;
    }
};


int main()
{
    Car *c = new Innova();
    c->start();

    c = new Swift();
    c->start();
}



// So your virtual function must be overrided by derived classes.
// And the purpose of pure virtual function is to achieve polymorphism.
// You cannot create the object of car class 
// that car class has to give nothing.Just the declaration of the function where the derived classes must implement those functions.