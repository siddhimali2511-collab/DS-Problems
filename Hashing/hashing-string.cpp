// #include <iostream>
// using namespace std;

// int main()
// {
//     // string input
//     string s;
//     cout << "Enter a String: ";
//     cin >> s;

//     // take quries
//     int q;
//     cout << "enter the number of quries: ";
//     cin >> q;

//     int hash[26] = {0};
//     for (int i = 0; i <= s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }

//     // execute quries
//     while (q--)
//     {
//         char c;
//         cout << "query char. : ";
//         cin >> c;

//         // fetch
//         cout << hash[c - 'a'] << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // string input
    string s;
    cout << "Enter a String: ";
    cin >> s;

    // take quries
    int q;
    cout << "enter the number of quries: ";
    cin >> q;

    int hash[256] = {0};
    for (int i = 0; i <= s.size(); i++)
    {
        hash[s[i]]++;
    }

    // execute quries
    while (q--)
    {
        char c;
        cout << "query char. : ";
        cin >> c;

        // fetch
        cout << hash[c] << endl;
    }

    return 0;
}