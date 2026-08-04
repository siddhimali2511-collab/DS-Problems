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
    unordered_map<int, int> mpp; // int value(key) and int frequency ----- in unordered map, kay can only be indevidual datatype, unlike map which can have pairs and other datatypes as keys aswell.
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // just to see the working of map
    for (auto i : mpp)
    {
        cout << i.first << "->" << i.second << endl;
    }

    // take quries
    int q;
    cout << "enter the number of quries: ";
    cin >> q;

    // execute quries
    while (q--)
    {
        int num;
        cout << "query no. : ";
        cin >> num;

        cout << mpp[num] << endl;
    }

    return 0;
}
