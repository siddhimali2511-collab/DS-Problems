// Stack - follows LIFO
// indexing does not exist in stack, only push, pop, top -> all operations are of time complexity O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{1,2}
    st.push(3);    //{1,2,3}
    st.push(4);    //{1,2,3,4}
    st.emplace(5); //{1,2,3,4,5}

    cout << st.top(); // prints 5

    st.pop(); // always pops the top element(i.e. it will pop 5, stack is now {1,2,3,4})

    st.size(); // 4

    st.empty(); // gives true if empty give false if not empty

    stack<int> st1, st2;
    st1.swap(st2);

    return 0;
}