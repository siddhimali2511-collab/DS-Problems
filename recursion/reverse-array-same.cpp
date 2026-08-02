// reverse the given array and print the same reversed array

#include <iostream>
using namespace std;

void revArr(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;

    revArr(arr, l + 1, r - 1);
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    revArr(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}