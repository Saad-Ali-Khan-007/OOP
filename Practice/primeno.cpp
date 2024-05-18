#include <iostream>
using namespace std;

int main()
{
    bool flagprime = true;
    int no;
    cout << "Enter no: ";
    cin >> no;
    if (no == 0 || no == 1)
    {
        flagprime == false;
    }
    else
    {
        for (int j = 2; j <= no / 2; j++)
        {
            if (no % j == 0)
            {
                flagprime == false;

                break;
            }
            else
            {
                flagprime == true;
            }
        }
    }
    return 0;
}