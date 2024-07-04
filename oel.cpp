// Write a program to print all prime no's in a given range [m,n]
#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= (num) / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void PrimesInRange(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main()
{
    int m = 20, n = 30;
    PrimesInRange(m, n);
    return 0;
}
