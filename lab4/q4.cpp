#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 04" << endl;
    return 0;
}

int removeDuplicates(int arr[], int n)
{

    if (n == 0 || n == 1)
        return n;

    int temp[5];

    int j = 0;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];

    temp[j++] = arr[n - 1];

    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int l4q4()
{
    int arr[] = {2, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

int main()
{
    startlab1();
    l4q4();
    return 0;
}