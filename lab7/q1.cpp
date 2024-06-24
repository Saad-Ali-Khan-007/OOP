#include <iostream>
using namespace std;

int startlab7()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 07" << endl;
    return 0;
}

class Vehicle
{
public:
    virtual void move() const
    {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle
{
public:
    void move() const override
    {
        cout << "Car is moving" << endl;
    }
};

int l7q1()
{
    Vehicle v;
    Car c;

    v.move();
    c.move();

    return 0;
}

int main()
{
    startlab7();
    l7q1();
    return 0;
}