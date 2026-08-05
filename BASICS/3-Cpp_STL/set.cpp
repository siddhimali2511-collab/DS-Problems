// Set -> Sorted and unique
// is not a linear container, a tree is maintained
// time complexity for all is O(log(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4}

    auto it = st.find(3); // returns an iterator(pointer) pointing towards the address of 3
    // or
    // set<int>::iterator it = st.find(3);
    auto f = st.find(6); // will return st.end(), i.e. if that element doesnt exist in the set, it will return the end function

    // either the element can be erased directly (by passing the element)
    st.erase(4); // erases 5 from the set and maintains the sorted order
    // or can be erased by passing the address of the element
    auto ad = st.find(4);
    st.erase(ad);

    int cnt = st.count(2); // if the element exists in the set, will return 1(as it is unique will only have one occurance) if it doesnt exist, it will return 0

    //{1,2,3,4,5,6}
    auto it1 = st.find(2);
    auto it2 = st.find(5);
    st.erase(it1, it2); //{1,5,6}

    // lower bound and upper bound
    //{1,2,4,5,6}
    auto it = st.lower_bound(2); // 2 exists so it will point to 2
    auto it = st.lower_bound(3); // 3 doesnt exist so it will give the next higher no i.e. 4
    auto it = st.lower_bound(7); // is bigger than the last element so will point to the pace after the end

    //{1,2,4,5,6}
    // upperbound will always return an element greater than the selected ele
    auto it = st.upper_bound(2); // it will point to 4
    auto it = st.upper_bound(3); // 3 doesnt exist still it will point to 4
    auto it = st.upper_bound(7); // is bigger than the last element so will point to the pace after the end

    return 0;
}