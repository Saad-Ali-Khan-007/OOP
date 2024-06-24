#include <iostream>
using namespace std;

int startlab7()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 07" << endl;
    return 0;
}
class Base
{
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() : privateVar(1), protectedVar(2), publicVar(3) {}
};

class Derived : public Base
{
public:
    void display()
    {
        // cout << "Private Var: " << privateVar << endl; // Not accessible
        cout << "Protected Var: " << protectedVar << endl; // Accessible
        cout << "Public Var: " << publicVar << endl;       // Accessible
    }
};

int l7q4()
{
    Derived d;
    d.display();

    // cout << d.privateVar << endl; // Not accessible
    // cout << d.protectedVar << endl; // Not accessible
    cout << "Public Var from main: " << d.publicVar << endl; // Accessible
    return 0;
}

int main()
{
    startlab7();
    l7q4();
    return 0;
}