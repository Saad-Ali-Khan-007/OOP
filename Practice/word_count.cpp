#include <iostream>
using namespace std;

int main()
{
    char x;
    int ccount;
    int wcount = 1;
    cout << "Enter any phrase" << endl;
    while (cin.get(x) && x != '\n')
    {
        if (x == ' ')
        {
            wcount++;
        }
        else
        {
            ccount++;
        }
    }

    cout << "character count:" << ccount << endl;
    cout << "word count:" << wcount << endl;
    return 0;
}