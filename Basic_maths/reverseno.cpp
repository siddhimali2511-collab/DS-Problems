// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

// Note : If A Number Has Trailing Zeros, Then Its Reverse Will Not Include Them. For E.G., Reverse Of 10400 Will Be 401 Instead Of 00401.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be reversed: ";
    cin >> n;
    int revNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        revNum = revNum * 10 + lastDigit;

        n = n / 10;
    }
    cout << revNum;

    return 0;
}
