#include <iostream>
using namespace std;

int startlab9()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 09" << endl;
    return 0;
}

class Vehicle
{
public:
    virtual double fuelEfficiency() const = 0;
    virtual ~Vehicle() = default;
};

class Car : public Vehicle
{
private:
    double distance;
    double fuelConsumed;

public:
    Car(double d, double f) : distance(d), fuelConsumed(f) {}

    double fuelEfficiency() const override
    {
        return distance / fuelConsumed;
    }
};

class Truck : public Vehicle
{
private:
    double distance;
    double fuelConsumed;

public:
    Truck(double d, double f) : distance(d), fuelConsumed(f) {}

    double fuelEfficiency() const override
    {
        return distance / fuelConsumed;
    }
};

int l9q3()
{
    Car c(500.0, 25.0);
    Truck t(600.0, 60.0);

    cout << "Fuel Efficiency of Car: " << c.fuelEfficiency() << " km/l" << endl;
    cout << "Fuel Efficiency of Truck: " << t.fuelEfficiency() << " km/l" << endl;
    return 0;
}

int main()
{
    startlab9();
    l9q3();
    return 0;
}