#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q5()
{
    int num, limit_num;
    cout << "Enter the number to get its table: ";
    cin >> num;
    cout << "Enter the limit of the table: ";
    cin >> limit_num;
    for (int i = 1; i <= limit_num; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}

int main()
{
    startlab2();
    l2q5();
    return 0;
}