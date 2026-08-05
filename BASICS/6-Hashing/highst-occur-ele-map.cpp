// map- <key, value> --- <number, frequency>

#include <bits/stdc++.h>

using namespace std;

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

    // hash-map logic
    map<int, int> mpp; // int value(key) and int frequency
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int max = 0;
    int highstEle = 0;
    for (auto i : mpp)
    {
        if (i.second > max) // IMPORTANT NOTE -> i IN MAP IA ({A,B})
        {
            max = i.second;
            highstEle = i.first;
        }
    }

    cout << "The element occuring the mximum amount of times is: " << highstEle << endl;
    cout << "Frequency is: " << max;

    return 0;
}
