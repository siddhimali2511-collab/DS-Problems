// Extract the digits of a number in reverse order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be digitized: ";
    cin >> n;

    while (n > 0)
    {
        cout << n % 10 << endl;
        n = n / 10;
    }

    return 0;
}