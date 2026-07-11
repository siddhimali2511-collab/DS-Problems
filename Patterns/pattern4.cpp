// Pattern - 4: Right-Angled Number Pyramid - II
// 1
// 22
// 333
// 4444
// 55555

// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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
