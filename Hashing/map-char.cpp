#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter the string: ";
    cin >> s;

    int q;
    cout << "enter the number of quries: ";
    cin >> q;

    map<char, int> mpp;
    for (int i = 0; i <= s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // execute quries
    while (q--)
    {
        char c;
        cout << "Enter query : ";
        cin >> c;

        cout << mpp[c] << endl;
    }
}