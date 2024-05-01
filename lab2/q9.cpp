#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q9()
{
    int user_num, comp_num;
    string play;

    cout << "Welcome to Rock, Paper, Scissors!\n";
    cout << "Enter 1 for Rock, 2 for Paper, or 3 for Scissors:\n";

    int userChoice;
    cin >> userChoice;

    int computerChoice = rand() % 3 + 1;

    cout << "You chose: ";
    switch (userChoice)
    {
    case 1:
        cout << "Rock\n";
        break;
    case 2:
        cout << "Paper\n";
        break;
    case 3:
        cout << "Scissors\n";
        break;
    default:
        cout << "Invalid choice\n";
        return 1;
    }

    cout << "Computer chose: ";
    switch (computerChoice)
    {
    case 1:
        cout << "Rock\n";
        break;
    case 2:
        cout << "Paper\n";
        break;
    case 3:
        cout << "Scissors\n";
        break;
    }

    if (userChoice == computerChoice)
    {
        cout << "It's a tie!\n";
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        cout << "You win!\n";
    }
    else
    {
        cout << "Computer wins!\n";
    }

    return 0;
}

int main()
{
    startlab2();
    l2q9();
    return 0;
}