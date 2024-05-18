#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int no = 5;
    for (int i = 1; i <= no; i++)
    {
        fact = fact * i;
        cout << fact << endl;
    }
}