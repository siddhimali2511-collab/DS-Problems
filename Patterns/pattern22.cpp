// Pattern - 22: The Number Pattern
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        // pattern 1
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        // pattern 2
        for (int j = 1; j <= 2 * n - 2 * i - 1; j++)
        {
            cout << n - i + 1 << " ";
        }
        // pattern 3
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    // pattern 4
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    for (int i = 2; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}

void pattern3(int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        // pattern 5
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        // pattern 6
        for (int j = 1; j <= 2 * n - 2 * i - 1; j++)
        {
            cout << n - i + 1 << " ";
        }
        // pattern 7
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{

    int a;
    cout << "enter the no.: ";
    cin >> a;
    pattern1(a);
    pattern2(a);
    pattern3(a);

    return 0;
}
