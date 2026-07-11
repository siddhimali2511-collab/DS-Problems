/*
Pattern-1: Rectangular Star Pattern
*****
*****
*****
*****
*****

Problem Statement: Given an integer N, print the following pattern.
*/

#include <bits/stdc++.h>
using namespace std;

// int main()
// {

//     // int m = 5;  --> ill do this if i want diff nos of rows and cols obv
//     int n = 5;

//     for (int i = 0; i < n; i++) // OUTER LOOP ALWAYS GIVES THE NUMBER OF ROWS
//     {
//         for (int j = 0; j < n; j++) // INNER LOOP ALWAYS GIVES THE NUMBER OF COLUMNS
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// DOING IT USING FUNCTIONS

void pattern(int n)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{

    int a;
    cout << "Enter the number of lines needed: ";
    cin >> a;
    pattern(a);

    return 0;
}