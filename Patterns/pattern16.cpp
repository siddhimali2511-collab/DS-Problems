// Pattern - 16: Alpha-Ramp Pattern
// A
// B B
// C C C
// D D D D
// E E E E E
// Problem Statement: Given an integer N, print the following pattern :

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (char j = 0; j <= i; j++)
        {
            cout << ch << " ";
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

// //without taking an extra character

// #include <bits/stdc++.h>
// using namespace std;

// void pattern(int n)
// {
//     for (char i = 'A'; i < 'A' + n; i++) //in ASCII values A is 65, for the working of this loop(for comparing a char to a char),
//     {                                       //'A'+n is valid as it will not run from 65 to 70, remember,
//         for (char j = 0; j <= i; j++)       // this line just iterates the loop over SOMETHING, that something can be from anywhere to anywhere
//         {
//             cout << i << " ";
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