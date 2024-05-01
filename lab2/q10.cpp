#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q10()
{
    int day_num;
    cout << "Enter the day number: ";
    cin >> day_num;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int i = 1; i <= days->length() + 1; i++)
    {
        if (i == day_num)
        {
            cout << days[i - 1];
        }
        else
        {
            continue;
        }
    }

    return 0;
}

int main()
{
    startlab2();
    l2q10();
    return 0;
}