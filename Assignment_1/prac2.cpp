#include <iostream>

void printFibonacci(int n)
{
    int a = 0, b = 1;
    std::cout << "Fibonacci series up to " << n << " terms:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main()
{
    int terms;
    std::cout << "Enter the number of terms: ";
    std::cin >> terms;
    printFibonacci(terms);
    return 0;
}