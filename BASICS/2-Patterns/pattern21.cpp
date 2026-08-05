// Pattern - 21: Hollow Rectangle Pattern
// * * * *
// *     *
// *     *
// * * * *
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == n || i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*" << " ";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
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
