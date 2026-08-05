// Pattern - 17a: Alpha-Hill Pattern
//    1
//   212
//  32123
// 4321234
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // char
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        // char
        for (int j = 2; j <= i; j++)
        {
            if (i != 1)
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
