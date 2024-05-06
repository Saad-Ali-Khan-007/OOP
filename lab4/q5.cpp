#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 04" << endl;
    return 0;
}

void isPalindrome(char *string)
{
    char *ptr, *rev;

    ptr = string;

    while (*ptr != '\0')
    {
        ++ptr;
    }
    --ptr;

    for (rev = string; ptr >= rev;)
    {
        if (*ptr == *rev)
        {
            --ptr;
            rev++;
        }
        else
            break;
    }

    if (rev > ptr)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not a Palindrome";
    }
}

int l4q5()
{
    char str[1000];
    cout << "Enter a word to check for palindrome: ";
    cin >> str;
    isPalindrome(str);

    return 0;
}

int main()
{
    startlab1();
    l4q5();
    return 0;
}