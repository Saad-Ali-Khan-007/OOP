#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 01" << endl;
    return 0;
}

int l1q1()
{
    float length, width, area;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    area = length * width;
    cout << "Area of rectangle is: " << area;
    return 0;
}

int main()
{
    startlab1();
    l1q1();
    return 0;
}
