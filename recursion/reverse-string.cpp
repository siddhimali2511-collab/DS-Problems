// reverse a string

#include <iostream>
using namespace std;

void revStr(string &str, int l, int r)
{
    if (l >= r)
        return;
    char temp = str[r];
    str[r] = str[l];
    str[l] = temp;

    revStr(str, l + 1, r - 1);
}

// void revStr(string &str, int l, int r)
// {
//     if (l >= r)
//         return;

//     swap(str[l], str[r]);

//     revStr(str, l + 1, r - 1);
// }


int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int n = str.length();

    revStr(str, 0, n - 1);
    cout << str;

    return 0;
}