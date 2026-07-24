// Deque
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);    //{1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(3);    //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    dq.pop_back();  //{4,3,1}
    dq.pop_front(); //{3,1,2}

    dq.back();  // gives the last ele
    dq.front(); // gives the first ele
    // while begin end are pointers that point to the location of 1st and last, back and front give refrence to the actual value

    // other functions like begin, end, rbegin, rend, clear, insert, size, swap are exactly as same as vectors

    return 0;
}
