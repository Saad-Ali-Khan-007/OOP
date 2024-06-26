#include <iostream>
using namespace std;

int startlab9()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 09" << endl;
    return 0;
}

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Dog says: Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

int l9q5()
{
    Dog d;
    Cat c;

    d.makeSound();
    c.makeSound();
    return 0;
}

int main()
{
    startlab9();
    l9q5();
    return 0;
}