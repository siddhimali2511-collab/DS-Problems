#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void basic()
{
    if (cnt == 3) // base case
        return;
    cout << cnt << endl;
    cnt++;
    basic();
}

int main()
{
    basic();
}