// MERGE SORT

// Index:  0  1  2  3  4  5  6  7  8
// Array: [3, 1, 2, 4, 1, 5, 2, 6, 4] -> 1, 1, 2, 2, 3, 4, 4, 5, 6

// Step 1: 1, 3, 2, 4, 1, 5, 2, 6, 4  (Merged [3] & [1])
// Step 2: 1, 2, 3, 4, 1, 5, 2, 6, 4  (Merged [1, 3] & [2])
// Step 3: 1, 2, 3, 1, 4, 5, 2, 6, 4  (Merged [4] & [1])
// Step 4: 1, 1, 2, 3, 4, 5, 2, 6, 4  (Merged [1, 2, 3] & [1, 4])
// Step 5: 1, 1, 2, 3, 4, 2, 5, 6, 4  (Merged [5] & [2])
// Step 6: 1, 1, 2, 3, 4, 2, 5, 4, 6  (Merged [6] & [4])
// Step 7: 1, 1, 2, 3, 4, 2, 4, 5, 6  (Merged [2, 5] & [4, 6])
// Step 8: 1, 1, 2, 2, 3, 4, 4, 5, 6  (Merged [1, 1, 2, 3, 4] & [2, 4, 5, 6])

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to merge two halves of the array
    void merge(vector<int>& arr, int low, int mid, int high) {
        // Create temp arrays
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        // Copy remaining elements from left half
        while (left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }

    // Recursive merge sort function
    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        // Find the middle index
        int mid = (low + high) / 2;

        // Recursively sort left half
        mergeSort(arr, low, mid);

        // Recursively sort right half
        mergeSort(arr, mid + 1, high);

        // Merge the two sorted halves
        merge(arr, low, mid, high);
    }
};

int main() {
    vector<int> arr = {5, 2, 8, 4, 1};
    Solution sol;
    sol.mergeSort(arr, 0, arr.size() - 1);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}



