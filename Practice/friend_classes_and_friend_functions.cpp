#include <iostream>
using namespace std;

// Friend class
// A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes.
// We can declare a friend class in C++ by using the friend keyword.

class A
{
private:
    int x = 10;
    friend class B;
};
class B
{
public:
    void showData(A obj)
    {
        obj.x = 110;
        cout << "Value of x after changes made by Friend class B is " << obj.x << endl;
    }
};
// Friend functions
// Functions which are not member functions of the class but can access the private and protected member of the class they are useful when we want to allow external members to access private data of class whic is helpful in certain scenarios like interface with external functions

class Account2;
class Account1
{
private:
    int money = 100;
    friend void bank(Account1, Account2);
};

class Account2
{
private:
    int money = 400;
    friend void bank(Account1, Account2);
};

void bank(Account1 A1, Account2 A2)
{
    cout << "The total money is: " << A1.money + A2.money << endl;
}

int main()
{
    A A1;
    B B1;
    B1.showData(A1);
    Account1 obj1;
    Account2 obj2;
    bank(obj1, obj2);
    return 0;
}
