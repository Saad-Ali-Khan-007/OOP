#include <iostream>
using namespace std;

class ComboLock
{
private:
    int com1, com2, com3;
    int num1, num2, num3;

public:
    ComboLock() : com1(0), com2(0), com3(0) {}
    void reset()
    {
        num1 = 0;
        num2 = 0;
        num3 = 0;
    }
    void turnLeft(int ticks)
    {
        if (num1 == 0)
        {
            num1 = ticks;
        }
        else
        {
            num3 = ticks;
        }
    }
    void turnRight(int ticks)
    {
        num2 = ticks;
    }
    bool open()
    {
        if ((num1 == com1) && (num2 == com2) && (num3 == com3))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    ComboLock cl;
    cl.turnLeft(12);
    cl.turnRight(23);
    cl.turnLeft(24);
    cout << cl.open();
    return 0;
}