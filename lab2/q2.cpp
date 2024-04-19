#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q2()
{
    int calls;
    cout << "Enter number of calls: ";
    cin >> calls;
    if (calls <= 100)
    {
        cout << "Charges: " << 200;
    }
    else if (calls > 100 && calls <= 150)
    {
        cout << "Charges: " << 200 + (0.60 * (calls - 100));
    }
    else if (calls > 150 && calls <= 200)
    {
        cout << "Charges: " << 200 + (0.60 * 50) + (0.50 * (calls - 150));
    }
    else
    {
        cout << "Charges: " << 200 + (0.60 * 50) + (0.50 * 50) + (0.40 * (calls - 200));
    }
    return 0;
}

int main()
{
    startlab2();
    l2q2();
    return 0;
}