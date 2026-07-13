// Pattern-18: Alpha-Triangle Pattern
// E
// D E
// C D E
// B C D E
// A B C D E
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (char j = 'A' + i; j >= 'A'; j--)
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
