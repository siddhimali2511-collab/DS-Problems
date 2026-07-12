// Pattern - 10: Half Diamond Star Pattern
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
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
    pattern1(a);
    pattern2(a);

    return 0;
}

// ANOTHER WAY

// #include <bits/stdc++.h>
// using namespace std;

// void pattern(int n)
// {
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int s = i;
//         if (i > n) s = (2 * n) - i;
//         for (int j = 1; j <= s; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {

//     int a;
//     cout << "enter the no.: ";
//     cin >> a;
//     pattern(a);

//     return 0;
// }