// Pattern - 12: Number Crown Pattern
// 1       1
// 12     21
// 123   321
// 12344321
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
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
