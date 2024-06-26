#include <iostream>
using namespace std;

int startlab9()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 09" << endl;
    return 0;
}

class Employee
{
public:
    virtual double calculateSalary() const = 0;
    virtual ~Employee() = default;
};

class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double bonus;

public:
    PermanentEmployee(double basic, double bon) : basicSalary(basic), bonus(bon) {}

    double calculateSalary() const override
    {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

int l9q2()
{
    PermanentEmployee pe(3000.0, 500.0);
    ContractEmployee ce(20.0, 160);

    cout << "Salary of Permanent Employee: " << pe.calculateSalary() << endl;
    cout << "Salary of Contract Employee: " << ce.calculateSalary() << endl;
    return 0;
}

int main()
{
    startlab9();
    l9q2();
    return 0;
}