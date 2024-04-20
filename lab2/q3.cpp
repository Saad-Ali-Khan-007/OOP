#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q3()
{
    string password;
    bool capital = false;
    bool small = false;
    bool digit = false;
    bool special_char = false;
    cout << "Enter a password: ";
    cin >> password;

    for (int i = 0; i <= password.length(); i++)
    {
        if (int(password[i]) >= 65 && int(password[i]) <= 90)
        {
            capital = true;
        }
        else if (int(password[i]) >= 97 && int(password[i]) <= 122)
        {
            small = true;
        }
        else if (int(password[i]) >= 48 && int(password[i]) <= 57)
        {
            digit = true;
        }
        else if ((int(password[i]) >= 0 && int(password[i]) <= 47) || (int(password[i]) >= 58 && int(password[i]) <= 64) || (int(password[i]) >= 91 && int(password[i]) <= 96) || (int(password[i]) >= 123 && int(password[i]) <= 127))
        {
            special_char = true;
        }
    }
    if (capital && small && digit && special_char && password.length() > 8)
    {
        cout << "Strong password";
    }
    else
    {
        if (capital && small && digit)
        {
            cout << "Password should contain a special character";
        }
        else if (capital && small && special_char)
        {
            cout << "Password should contain a digit";
        }
        else if (capital && special_char && digit)
        {
            cout << "Password should contain a small character";
        }
        else if (special_char && small && digit)
        {
            cout << "Password should contain a capital character";
        }
        else
        {
            cout << "Weak password";
        }
    }

    return 0;
}

int main()
{
    startlab2();
    l2q3();
    return 0;
}