#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 06" << endl;
    return 0;
}

class Fraction
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) const
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction(int num, int den) : numerator(num), denominator(den)
    {
        if (den == 0)
        {
            throw invalid_argument("Denominator cannot be zero.");
        }
    }

    void simplify()
    {
        int gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
    }

    void display() const
    {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }
};

int l6q6()
{
    try
    {
        Fraction frac(10, 20);
        frac.simplify();
        frac.display();
    }
    catch (const invalid_argument &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}

int main()
{
    startlab6();
    l6q6();
    return 0;
}