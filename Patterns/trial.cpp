#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        // pattern 1
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        // pattern 2
        for (int j = 1; j <= 2 * n - 2 * i - 1; j++)
        {
            cout << n - i + 1 << " ";
        }
        // pattern 3
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j << " ";
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
