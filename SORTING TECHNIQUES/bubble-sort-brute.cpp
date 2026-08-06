// BUBBLE SORT

// Index:  0   1   2   3   4   5
// Array: [13, 46, 24, 52, 20, 9] -> 9, 13, 20, 24, 46, 52

// Step 1: 13, 24, 46, 20, 9, 52
// Step 2: 13, 24, 20, 9, 46, 52
// Step 3: 13, 20, 9, 24, 46, 52
// Step 4: 13, 9, 20, 24, 46, 52
// Step 5: 9, 13, 20, 24, 46, 52

#include <iostream>
using namespace std;

// Sorting logic
void bubble_sort(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    // find max element
    {
        for (int i = 0; i < n - 1 - j; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
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

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }

    return 0;
}
