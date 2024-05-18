#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string field;
    int salary;
};
Employee getData(Employee e4)
{
    cout << "Enter Employee Details" << endl;
    cout << "Name:";
    cin >> e4.name;
    cout << "Field:";
    cin >> e4.field;
    cout << "Salary:";
    cin >> e4.salary;
    return e4;
}

int main()
{
    Employee e1 = {"Saad", "Software Engineering", 800000};
    Employee e2;
    Employee e3 = getData(e2);
    cout << "Employee 1 has a name " << e1.name << " its field is " << e1.field << " and its salary is " << e1.salary << endl;
    cout << "Employee 2 has a name " << e3.name << " its field is " << e3.field << " and its salary is " << e3.salary << endl;
    return 0;
}