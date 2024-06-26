#include <iostream>
using namespace std;

int startlab9()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 09" << endl;
    return 0;
}

class Payment
{
public:
    virtual void processPayment() const = 0;
    virtual ~Payment() = default;
};

class CreditCardPayment : public Payment
{
private:
    double amount;

public:
    CreditCardPayment(double amt) : amount(amt) {}

    void processPayment() const override
    {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

class PaypalPayment : public Payment
{
private:
    double amount;

public:
    PaypalPayment(double amt) : amount(amt) {}

    void processPayment() const override
    {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

int l9q4()
{
    CreditCardPayment ccp(150.0);
    PaypalPayment pp(200.0);

    ccp.processPayment();
    pp.processPayment();

    return 0;
}

int main()
{
    startlab9();
    l9q4();
    return 0;
}