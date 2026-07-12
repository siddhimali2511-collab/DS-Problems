// Pattern - 13: Increasing Number Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
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
