// priority queue
// the largest element stays at the top
// push -> O(log(n))
// top -> O(1)
// pop -> O(log(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(2);  //{2}
    pq.push(5);  //{2,5}
    pq.push(1);  //{1,2,5}
    pq.push(10); //{1,2,5,10}

    cout << pq.top(); // prints the lelment at the top i.e. 10

    pq.pop(); // pops out the top element i.e. 10 {1,2,5}

    // size, swap, empty functions are same as the others

    // to make a priority queue with the smallest element at the top
    // also called minimum priority queue or min heap
    priority_queue<int, vector<int>, greater<int>> pqs; // syntax
    pqs.push(5);                                        //{5}
    pqs.push(2);                                        //{5,2}
    pqs.push(1);                                        //{5,2,1}
    pqs.push(10);                                       //{10,5,2,1}

    pqs.top(); // 1

    return 0;
}