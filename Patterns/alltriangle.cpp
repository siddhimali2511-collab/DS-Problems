
// enter the no.: 5

// Pattern no. 1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// Pattern no. 2
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// Pattern no. 3
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// Pattern no. 4
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

// Pattern no. 5
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// Pattern no. 6
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <bits/stdc++.h>
using namespace std;

void patterna(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void patternb(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void patternc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void patternd(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void patterne(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void patternf(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{

    int x;
    cout << "enter the no.: ";
    cin >> x;
    cout << "\n";
    cout << "Pattern no. 1" << "\n";
    patterna(x);
    cout << "\n";
    cout << "Pattern no. 2" << "\n";
    patternb(x);
    cout << "\n";
    cout << "Pattern no. 3" << "\n";
    patternc(x);
    cout << "\n";
    cout << "Pattern no. 4" << "\n";
    patternd(x);
    cout << "\n";
    cout << "Pattern no. 5" << "\n";
    patterne(x);
    cout << "\n";
    cout << "Pattern no. 6" << "\n";
    patternf(x);
    cout << "\n";

    return 0;
}
