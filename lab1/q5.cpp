#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q5()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int len = word.length();
    for (int i = len - 1; i >= 0; i--)
    {

        cout << word[i];
    }
    return 0;
}

int main()
{
    startlab1();
    l1q5();
    return 0;
}