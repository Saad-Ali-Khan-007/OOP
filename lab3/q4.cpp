#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Student
{
    int rollNumber;
    string name;
    int age;
    int marks;
};

int l3q4()
{
    Student s1[4] = {83, "Saad Ali Khan", 18, 97};
    Student s2[4] = {66, "Muzammil Ali Khan", 22, 94};
    Student s3[4] = {44, "Anus Ali Khan", 24, 96};
    cout << "Roll No: " << s1->rollNumber << "\t"
         << "Name: " << s1->name << "\t"
         << "Age:" << s1->age << "\t"
         << "Marks: " << s1->marks << endl;
    cout << "Roll No: " << s2->rollNumber << "\t"
         << "Name: " << s2->name << "\t"
         << "Age:" << s2->age << "\t"
         << "Marks: " << s2->marks << endl;
    cout << "Roll No: " << s3->rollNumber << "\t"
         << "Name: " << s3->name << "\t"
         << "Age:" << s3->age << "\t"
         << "Marks: " << s3->marks << endl;
    if (s1->marks > s2->marks && s1->marks > s3->marks)
    {
        cout << "Saad Ali Khan has highest marks which are:" << s1->marks;
    }
    else if (s2->marks > s1->marks && s2->marks > s3->marks)
    {
        cout << "Muzammil Ali Khan has highest marks which are:" << s2->marks;
    }
    else
    {
        cout << "Anus Ali Khan has highest marks which are:" << s3->marks;
    }
    return 0;
}

int main()
{
    startlab3();
    l3q4();
    return 0;
}