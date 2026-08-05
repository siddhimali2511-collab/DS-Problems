// Check if the number is an armstrong number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;
    int sumOfSquare = 0;
    int dupe = n;

    while (n > 0)
    {
        int ld = n % 10;
        sumOfSquare = sumOfSquare + (ld) * (ld) * (ld);
        n = n / 10;
    }

    if (sumOfSquare == dupe)
    {
        cout << "Is an Armstrong Number.";
    }
    else
    {
        cout << "Is not an Armstrong Number.";
    }

    return 0;
}
