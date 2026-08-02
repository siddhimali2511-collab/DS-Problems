// reverse a given array and store in new array and print the new array

#include <iostream>
using namespace std;

void revArr(int arr[], int rev[], int i)
{
    if (i == 5)
        return;

    rev[i] = arr[4 - i];
    revArr(arr, rev, i + 1);
}
int main()
{
    int egarr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number: ";
        cin >> egarr[i];
    }

    int egrev[5];
    revArr(egarr, egrev, 0);

    for (int i = 0; i < 5; i++)
        cout << egrev[i] << " ";
}
