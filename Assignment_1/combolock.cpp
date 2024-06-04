#include <iostream>
using namespace std;

class ComboLock
{
private:
    int num1;
    int num2;
    int num3;

public:
    ComboLock(int n1, int n2, int n3)
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }
    void reset()
    {
        num1 = 0;
        num2 = 0;
        num3 = 0;
    }
    void turnLeft(int ticks)
    {
    }
    void turnRight(int ticks)
    {
    }
    bool open()
    {
        if ((num1 = 0) && (num2 = 1) && (num3 = 2))
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
    return 0;
}