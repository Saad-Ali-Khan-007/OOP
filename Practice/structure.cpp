#include <iostream>
#include <string>
using namespace std;

struct Car
{
    string carname;
    int model;
    int price;
};

int main()
{
    Car c1, c2;
    cout << "Enter details of car 1" << endl;
    cout << "Name:";
    cin >> c1.carname;
    cout << "Model:";
    cin >> c1.model;
    cout << "Price:";
    cin >> c1.price;
    cout << "Enter details of car 2" << endl;
    cout << "Name:";
    cin >> c2.carname;
    cout << "Model:";
    cin >> c2.model;
    cout << "Price:";
    cin >> c2.price;
    cout << "Car 1 has a name " << c1.carname << " its model is " << c1.model << " and its price is " << c1.price << endl;
    cout << "Car 2 has a name " << c2.carname << " its model is " << c2.model << " and its price is " << c2.price << endl;
    return 0;
}