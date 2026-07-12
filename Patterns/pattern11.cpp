// Pattern - 11: Binary Number Triangle Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            cout << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}

int main()
{

    int a;
    cout << "enter the no.: ";
    cin >> a;
    pattern(a);

    return 0;
}
