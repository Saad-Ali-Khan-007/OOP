#include <iostream>
using namespace std;
class ComboLock
{
private:
    int secret1, secret2, secret3;
    int currentPosition;
    int step;
    int input1, input2, input3;

public:
    ComboLock(int secret1, int secret2, int secret3)
    {
        this->secret1 = secret1;
        this->secret2 = secret2;
        this->secret3 = secret3;
        reset();
    }

    void reset()
    {
        currentPosition = 0;
        step = 0;
        input1 = input2 = input3 = -1;
    }

    void turnLeft(int ticks)
    {
        currentPosition = (currentPosition - ticks + 40) % 40;
        if (step == 1)
        {
            input2 = currentPosition;
            step++;
        }
        cout << "Turned Left to " << currentPosition << endl;
    }

    void turnRight(int ticks)
    {
        currentPosition = (currentPosition + ticks) % 40;
        if (step == 0)
        {
            input1 = currentPosition;
            step++;
        }
        else if (step == 2)
        {
            input3 = currentPosition;
            step++;
        }
        cout << "Turned Right to " << currentPosition << endl;
    }

    bool open()
    {
        if (input1 == secret1 && input2 == secret2 && input3 == secret3)
        {
            cout << "Lock opened successfully!" << endl;
            return true;
        }
        else
        {
            cout << "Failed to open the lock." << endl;
            return false;
        }
    }
};

int main()
{

    ComboLock lock(10, 20, 30);

    lock.reset();
    lock.turnRight(10);
    lock.turnLeft(30);
    lock.turnRight(10);
    lock.open();

    lock.reset();
    lock.turnRight(5);
    lock.turnLeft(15);
    lock.turnRight(25);
    lock.open();

    return 0;
}
