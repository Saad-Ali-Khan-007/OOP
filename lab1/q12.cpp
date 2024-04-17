#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q12()
{
    int seconds;
    cout << "Enter the time in seconds: ";
    cin >> seconds;
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    cout << "Hours in time is: " << hours << endl;
    cout << "Minutes in time: " << minutes << endl;
    cout << "Seconds in time is: " << remaining_seconds << endl;
    return 0;
}

int main()
{
    startlab1();
    l1q12();
    return 0;
}