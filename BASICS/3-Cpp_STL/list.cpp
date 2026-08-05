// List - similar to vestor but also gives you front operations aswell
// the internal operation is a doublly linked list(hence has faster fron operations unline vector which has to use the insert function)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.emplace_back(2); //{2}
    ls.push_back(3);    //{2,3}

    ls.emplace_front(4); //{4,2,3}
    ls.push_front(5);    //{5,4,2,3}

    // other functions like begin, end, rbegin, rend, clear, insert, size, swap are exactly as same as vectors

    return 0;
}