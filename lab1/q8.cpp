#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q8()
{
    int simple_interest, principal_amount, time_period;
    float rate_of_interest;
    cout << "Enter principal amount: ";
    cin >> principal_amount;
    cout << "Enter rate of interest: ";
    cin >> rate_of_interest;
    cout << "Enter time period: ";
    cin >> time_period;
    simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
    cout << "Simple interest: " << simple_interest;
    return 0;
}

int main()
{
    startlab1();
    l1q8();
    return 0;
}