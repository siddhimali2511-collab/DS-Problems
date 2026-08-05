// Queue - follows FIFO
// all operations are of time complexity O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.push(4); //{1,2,3,4}

    cout << q.back(); // 4
    q.back() += 5;    // 4+=5->9
    cout << q.back(); // 9

    cout << q.front(); // 1

    q.pop();           //{2,3,9}
    cout << q.front(); // 2

    return 0;
}