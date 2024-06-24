#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 06" << endl;
    return 0;
}

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    void display() const
    {
        cout << "Car [Brand: " << brand << ", Model: " << model << ", Year: " << year << "]" << endl;
    }
};

int l6q5()
{
    Car car("Toyota", "Corolla", 2020);
    car.display();
    return 0;
}

int main()
{
    startlab6();
    l6q5();
    return 0;
}