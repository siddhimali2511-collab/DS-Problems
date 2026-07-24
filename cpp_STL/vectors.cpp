// Vectors
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // creats an empty container {}

    v.push_back(1);    // i will be into the empty container {1}
    v.emplace_back(2); // similar to pushback, it will dynamically increase the size of the vector and add 2

    // vector of a pair data type
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(1, 2); // you dont need the curly braces unlike push back, emplace back will automatically assume it to be a pair a

    vector<int> v2(5, 100); // is a container containing 5 instances of 100. {100,100,100,100,100}, the size can still be increased using pushback or emplace back.
    vector<int> v3(5);      // vector containing 5 instances of either a garbage value or 0 will be created depending on the compiler.

    vector<int> v4(v2); // now v4 will be a copy of v2

    vector<int>::iterator abc = v.begin(); // iterator begin points to the memory adress where the first item is(i.e. 1) **begin is the iterator**
    abc++;                                 // now the pointer is to then next memory adress in the vector(i.e. 2)
    cout << *(abc) << " ";
    vector<int>::iterator it = v.end(); // the end iterator points to the place right after the last item(i.e. it will point {1,2}_<- here)
    it--;                               // will now point to the last element of that vector

    // rarely used
    // vector<int>::iterator it = v.rend();   // reverse end is the iterator that will reverse the elements and then point to the end(and hence effective;y it points here->_{1,2})
    // vector<int>::iterator it = v.rbegin(); // will point to 2 in {1,2}, it++ will move to 1 (in the opposite direction)

    cout << v[0] << "\n";    // gives the element at 0th index so 1
    cout << v.at(0) << "\n"; // also give the element at the 0th index

    cout << v.back() << "\n"; // will print the last element of the vector, so 2

    // Loops for vectors using iterators
    vector<int> vec = {10, 20, 30};
    for (vector<int>::iterator x = vec.begin(); x != vec.end(); x++)
    {
        cout << *(x) << "\n";
    }

    // Auto
    int b = 5;
    auto b = 5; // it will automatically detect what 5 is and work accordingly

    // auto can be used so we dont have to write the whole iterator syntax
    for (auto x = vec.begin(); x != vec.end(); x++)
    {
        cout << *(x) << "\n";
    }

    // using the for each loop
    for (auto x : v)
    {
        cout << x << "\n";
    }

    // deleting
    //{1,2,3,4,5,6,7,8}
    v.erase(v.begin() + 1); // it will now erase the begin + 1 i.e. 2

    // reasing multiple
    //{1,2,3,4,5,6,7,8}
    v.erase(v.begin() + 1, v.begin() + 5); // the format is erase [start, end), so it will erase from 2 to 4, i.e the new array is {1,6,7,8}

    // insert function
    //{1,2,3,4,5,6,7,8}
    v.insert(v.begin(), 20);        //{20,1,2,3,4,5,6,7,8}
    v.insert(v.begin() + 1, 2, 10); //{1,10,10,2,3,4,5,6,7,8} basically will add 2 instances of 10 at potisoion 1+begin(i.e. just after the first)

    // to insert an entire vector inside another vector
    vector<int> vec2(2, 5);
    v.insert(v.begin(), vec2.begin(), vec2.end()); // will insert vec2 from begining to end inside v at he begining

    // size
    //{10,20}
    cout << v.size(); // will give you how may elements are inside the vector(2)

    // pop
    //{10,20}
    v.pop_back(); // will pop the last element(i.e.20)

    // swap
    // v1->{10,20}
    // v2->{30,40}
    v1.swap(v2); // v1->{30,40}, v2->{10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // gives true of vector is empty, and false if vector has any elemet 

    return 0;
}