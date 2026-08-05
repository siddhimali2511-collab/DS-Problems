// Map -> key - value data pairs, keys are unique but the values can be multiple
// keys are unique and are stored in sorted order
// key  and value can be of any data type, int, double, pair

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;

    mpp[1] = 2;         // on key 1 store value 2. internally it stores{1,2}
    mpp.emplace(2, 5);  // on key 2 store 5
    mpp.insert({3, 4}); // on key 3 store 4

    cout << mpp[1]; // will print 2
    cout << mpp[5]; // key does not exist so it will either peint null or 0

    auto it = mpp.find(3); // will point to the key 3
    cout << (*it).second;  // will print the value of they key to which the iterator it points

    auto it = mpp.find(5); // will point to the end

    // or for different datatypes
    map<int, pair<int, int>> m;  // value is a pair
    map<pair<int, int>, int> mp; // key is a pair

    // for key pair and value int
    mp[{1, 2}] = 1;

    for (auto it : mp)
    {
        cout << it.first.first << " " << it.first.second << endl;
    }

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as the others

    return 0;
}