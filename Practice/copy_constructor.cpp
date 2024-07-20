#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    int age;
    float salary;

public:
    Employee(int i, string n, int a, float s) : id(i), name(n), age(a), salary(s) {}
    // Compiler default copy constructor
    // Parameterized Copy Contructor for deep copy
    Employee(Employee &obj)
    {
        id = obj.id;
        name = obj.name;
        age = obj.age;
        salary = obj.salary;
        cout << "Copy constructor called" << endl;
    }
    void display()
    {
        cout << "Employee Personal Details are " << endl;
        cout << "Empid :" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Salary :" << salary << endl;
    }
};

int main()
{
    Employee e1(83, "Saad", 20, 0.00);
    // e1.display();

    Employee e3(e1);  // Shallow Copy
    Employee e2 = e1; // Deep Copy

    return 0;
}