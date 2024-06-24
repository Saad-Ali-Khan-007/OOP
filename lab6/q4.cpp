#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 06" << endl;
    return 0;
}
class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNum, string accHolder, double bal)
        : accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient funds." << endl;
        }
    }

    void display() const
    {
        cout << "BankAccount [Account Number: " << accountNumber
             << ", Account Holder: " << accountHolder
             << ", Balance: " << balance << "]" << endl;
    }
};

int l6q4()
{
    BankAccount account(123456, "Saad Ali Khan", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();
    return 0;
}

int main()
{
    startlab6();
    l6q4();
    return 0;
}