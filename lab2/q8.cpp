#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q8()
{
    int guessed_num, rand_num;
    string play;
    while (1)
    {
        cout << "Enter a number bw 1 and 100 to check if its same as randomly generated number: ";
        cin >> guessed_num;
        rand_num = rand() % 100 + 1;
        if (guessed_num == rand_num)
        {
            cout << "Congrulation! You are right" << endl;
        }
        else
        {
            cout << "Opps! wrong number.The correct is: " << rand_num << endl;
        }
        cout << "Do you want to play again(yes/no): ";
        cin >> play;
        if (play == "yes")
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main()
{
    startlab2();
    l2q8();
    return 0;
}