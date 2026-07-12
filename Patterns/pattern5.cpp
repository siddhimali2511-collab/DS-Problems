// Pattern-5: Inverted Right Pyramid
// *****
// ****
// ***
// **
// *
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
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

