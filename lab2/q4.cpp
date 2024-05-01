#include <iostream>
#include <string>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}
string caesarCipher(const string &text, int shift)
{
    string result = text;
    for (char &c : result)
    {
        if (isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            c = static_cast<char>((c - base + shift) % 26 + base);
        }
    }
    return result;
}
int l2q4()
{
    string text;
    int shift;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the shift value: ";
    cin >> shift;

    string encrypted_text = caesarCipher(text, shift);
    string decrypted_text = caesarCipher(encrypted_text, -shift);

    cout << "\nEncrypted Text:\n"
         << encrypted_text << endl;
    cout << "\nDecrypted Text:\n"
         << decrypted_text << endl;
    return 0;
}

int main()
{
    startlab2();
    l2q4();
    return 0;
}