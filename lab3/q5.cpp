#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Employee
{
    int employeeID;
    string name;
    string department;
    float salary;
};

int l3q5()
{
    Employee e1[4] = {83, "Saad Ali Khan", "HR", 97000};
    Employee e2[4] = {66, "Muzammil Ali Khan", "Testing", 94000};
    Employee e3[4] = {44, "Anus Ali Khan", "Production", 96000};
    Employee e4[4] = {54, "Maaz Ali Murtaza", "QA", 98000};
    Employee e5[4] = {95, "Sakhawat Ali Khan", "Production", 91000};
    cout << "Employee ID: " << e1->employeeID << "\t"
         << "Name: " << e1->name << "\t"
         << "Department:" << e1->department << "\t\t"
         << "Salary: " << e1->salary << endl;
    cout << "Employee ID: " << e2->employeeID << "\t"
         << "Name: " << e2->name << "\t"
         << "Department:" << e2->department << "\t"
         << "Salary: " << e2->salary << endl;
    cout << "Employee ID: " << e3->employeeID << "\t"
         << "Name: " << e3->name << "\t"
         << "Department:" << e3->department << "\t"
         << "Salary: " << e3->salary << endl;
    cout << "Employee ID: " << e4->employeeID << "\t"
         << "Name: " << e4->name << "\t"
         << "Department:" << e4->department << "\t\t"
         << "Salary: " << e4->salary << endl;
    cout << "Employee ID: " << e5->employeeID << "\t"
         << "Name: " << e5->name << "\t"
         << "Department:" << e5->department << "\t"
         << "Salary: " << e5->salary << endl;

    float average_salary = (e1->salary + e2->salary + e3->salary + e4->salary + e5->salary) / 5;
    cout << "The average salary of all employees is: " << average_salary;

    return 0;
}

int main()
{
    startlab3();
    l3q5();
    return 0;
}