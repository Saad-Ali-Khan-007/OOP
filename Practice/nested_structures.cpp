#include <iostream>
using namespace std;

struct Distance
{
    int feets;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

Room getData(Room dine)
{
    dine.length.feets = 15;
    dine.length.inches = 13.4;
    dine.width.feets = 14;
    dine.width.inches = 12;

    return dine;
}

int main()
{
    Room Bedroom = {{10, 5.6}, {12, 8.87}};
    Room Dining;
    Room Dine = getData(Dining);
    double bed_area = (Bedroom.length.feets + Bedroom.length.inches) / 12 + (Bedroom.width.feets +
                                                                             Bedroom.width.inches) /
                                                                                12;
    double dine_area = (Dine.length.feets + Dine.length.inches) / 12 + (Dine.width.feets +
                                                                        Dine.width.inches) /
                                                                           12;
    cout << "The area of dine is: " << dine_area << endl;
    cout << "The area of bedroom is: " << bed_area << endl;
}