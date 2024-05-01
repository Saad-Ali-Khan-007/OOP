#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Product
{
    string productName;
    float price;
    int quantity;
};

int l3q7()
{
    Product p1;
    p1.productName = "Milk";
    p1.price = 200;
    p1.quantity = 3;
    cout << "The total cost of " << p1.productName << " having quantity " << p1.quantity << " is: " << p1.price * p1.quantity;
    return 0;
}
int main()
{
    startlab3();
    l3q7();
    return 0;
}