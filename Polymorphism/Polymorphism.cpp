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
