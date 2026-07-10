#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "Enter a number:";
    cin >> x;
    cout << "the number you entered is:" << x << "\n";

    
    string y;
    getline(cin, y);
    cout << y;

    return 0;
}