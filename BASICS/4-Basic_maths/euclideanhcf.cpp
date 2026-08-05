#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number n1: ";
    cin >> a;

    int b;
    cout << "Enter the number n2: ";
    cin >> b;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }
    return 0;
}
