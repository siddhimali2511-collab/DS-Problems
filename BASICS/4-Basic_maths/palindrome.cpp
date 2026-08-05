// Write a program to determine if given number is palindrome or not. Print true if it is palindrome, false otherwise.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be reversed: ";
    cin >> n;
    int revNum = 0;
    int dup = n;

    while (n > 0)
    {
        int lastDigit = n % 10;

        revNum = revNum * 10 + lastDigit;

        n = n / 10;
    }
    if (dup == revNum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}