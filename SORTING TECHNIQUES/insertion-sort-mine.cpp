// INSERTION SORT

// Index:  0   1   2   3   4  5   6
// Array: [14, 9, 15, 12, 6, 8, 13] -> 6, 8, 9, 12, 13, 14, 15

// Step 1: 9, 14, 15, 12, 6, 8, 13
// Step 2: 9, 14, 15, 12, 6, 8, 13
// Step 3: 9, 12, 14, 15, 6, 8, 13
// Step 4: 6, 9, 12, 14, 15, 8, 13
// Step 5: 6, 8, 9, 12, 14, 15, 13
// Step 6: 6, 8, 9, 12, 13, 14, 15

#include <iostream>
using namespace std;

// Sorting logic
void insertion_sort(int arr[], int n)
{
    for (int j = 1; j < n; j++)
    // find max element
    {
        for (int i = j; i > 0; i--)
        {
            int ifswap = 0;
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
                ifswap = 1;
            }
            if (ifswap == 0)
            {
                break;
            }
        }
    }
}

int main()
{

    // take an array input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }

    return 0;
}
