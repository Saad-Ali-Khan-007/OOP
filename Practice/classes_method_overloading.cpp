#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makesound()
    {
        cout << "I am an animal and can make sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void makesound() override
    {
        cout << "I am a dog and can bark" << endl;
    }
};
class Cat : public Animal
{
public:
    void makesound() override
    {
        cout << "I am a cat and can meow" << endl;
    }
};

int main()
{
    Animal *a[2];
    Dog d1;
    Cat c1;
    a[0] = &d1;
    a[1] = &c1;
    a[0]->makesound();
    a[1]->makesound();
    return 0;
}