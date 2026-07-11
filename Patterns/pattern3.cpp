// Pattern - 3: Right-Angled Number Pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
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

// or

// #include <bits/stdc++.h>
// using namespace std;

// void pattern(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
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