// Given the number 'n', find out and return the number of digits present in a number .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be digitized: ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        count += 1;
    }
    cout << count << endl;

    return 0;
}