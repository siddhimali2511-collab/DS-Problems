// Extract the digits of a number in reverse order
// done by using mathematical logig to make it faster

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    vector<int> res;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);

            if (i != n / i)
            {
                res.push_back(n / i);
            }
        }
    }

    sort(res.begin(), res.end());
    for (auto x : res)
    {
        cout << x << endl;
    }

    return 0;
}

// for (vector<int>::iterator x = res.begin(); x != res.end(); x++)
// {
//     cout << *(x) << endl;
// }