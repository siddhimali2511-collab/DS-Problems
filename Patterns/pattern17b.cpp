// Pattern - 17b: Alpha-Hill Pattern
//    A
//   ABA
//  ABCBA
// ABCDCBA
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // char
        for (char j = 'A' + i; j >= 'A'; j--)
        {
            cout << j;
        }
        // char
        for (char j = 'B'; j <= 'A' + i; j++)
        {
            if ('A' + i != 'A')
                cout << j;
        }
        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
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
