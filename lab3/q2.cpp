#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Rectangle
{
    float length;
    float width;
};

int l3q2()
{
    Rectangle r1;
    cout << "Enter length: ";
    cin >> r1.length;
    cout << "Enter width: ";
    cin >> r1.width;
    cout << "Area: " << r1.width * r1.length << endl;

    return 0;
}

int main()
{
    startlab3();
    l3q2();
    return 0;
}