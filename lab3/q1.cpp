#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Person
{
    string name;
    int age;
};

int l3q1()
{
    Person p1;
    p1.name = "Saad Ali Khan";
    p1.age = 18;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    return 0;
}

int main()
{
    startlab3();
    l3q1();
    return 0;
}