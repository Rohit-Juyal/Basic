#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};

class AdvanceCar:public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music playing" << endl;
    }
};

int main()
{
    // AdvanceCar a;
    // BasicCar *ptr = &a;
    // ptr->start();
    // ptr->playMusic(); 

    // BasicCar b;
    // AdvanceCar *q = &b;  (wrong)
}