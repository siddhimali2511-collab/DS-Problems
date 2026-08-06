// SELECTION SORT

// Index:  0   1   2   3   4   5
// Array: [13, 46, 24, 52, 20, 9] -> 9, 13, 20, 24, 46, 52

// Step 1: 9, 46, 24, 52, 20, 13
// Step 2: 9, 13, 24, 52, 20, 46
// Step 3: 9, 13, 20, 52, 24, 46
// Step 4: 9, 13, 20, 24, 52, 46
// Step 5: 9, 13, 20, 24, 46, 52

//

#include <iostream>
using namespace std;

// Sorting logic
void selection_sort(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    // find min element
    {
        int index = j;
        for (int i = j; i < n; i++)
        {

            if (arr[i] < arr[index])
            {
                index = i;
            }
        }

        // swaps the minimum element with the first element
        swap(arr[j], arr[index]);
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

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }

    return 0;
}
