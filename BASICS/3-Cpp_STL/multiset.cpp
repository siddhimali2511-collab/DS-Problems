// Multiset -> exactly like a set but allows multiple occurances of the same value

#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}

    ms.erase(1); // will now erase all occurances of 1!

    // if i want to erase a specific occurance, ill pass it by the adress
    ms.erase(ms.find(1));
    //ms.erase(ms.find(1), ms.find(1) + 2); // will erase from starting adress to end address

    int cnt = ms.count(1); // 4

    // rest all functions are same as set
    return 0;
}