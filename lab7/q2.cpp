#include <iostream>
using namespace std;

int startlab7()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 07" << endl;
    return 0;
}
class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &n, int a) : name(n), age(a) {}
};

class Student : public Person
{
private:
    int studentID;

public:
    Student(const string &n, int a, int id) : Person(n, a), studentID(id) {}

    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
    }
};

int l7q2()
{
    Student s("Alice", 20, 12345);
    s.display();
    return 0;
}

int main()
{
    startlab7();
    l7q2();
    return 0;
}