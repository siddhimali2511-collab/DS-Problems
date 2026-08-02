// Check if the sting is a palindrome

// #include <iostream>
// using namespace std;

// void revStr(string str, int l, int r)
// {
//     if (l >= r)
//     {
//         cout << "String ia a palindrome.";
//         return;
//     }
//     if (str[l] == str[r])
//         revStr(str, l + 1, r - 1);
//     else
//         cout << "String is not a palindrom.";
// }

// int main()
// {
//     string str;
//     cout << "Enter the string: ";
//     cin >> str;

//     int n = str.length();

//     revStr(str, 0, n - 1);

//     return 0;
// }

#include <iostream>
using namespace std;

bool revStr(string &s, int n)
{
    if (s.size() / 2 <= n)
        return true;
    if (s[n] != s[s.size() - n - 1])
        return false;
    return (revStr(s, n + 1));
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << revStr(str, 0);

    return 0;
}