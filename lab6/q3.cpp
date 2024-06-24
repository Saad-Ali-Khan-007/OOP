#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 06" << endl;
    return 0;
}
class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    void display() const
    {
        cout << "Employee [Name: " << name << ", Salary: " << salary << "]" << endl;
    }
};

int l6q3()
{
    Employee emp("John Doe", 50000.0);
    emp.display();
    return 0;
}

int main()
{
    startlab6();
    l6q3();
    return 0;
}