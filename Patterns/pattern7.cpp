// Pattern - 7: Star Pyramid
//     *
//    ***
//   *****
//  *******
// *********
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        int b = (i * 2) + 1;
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        cout << string(b, '*') << "\n";
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

// // STRIVERS WAY TO DO THE PROBLEM: (Using the space * space method)

// #include <bits/stdc++.h>
// using namespace std;

// void pattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         } // space
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
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
