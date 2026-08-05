#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 1)
        return (1);
    return (n * fac(n - 1));
}

int main()
{
    int i;
    cout << "Enter the number n: ";
    cin >> i;

    cout << fac(i);
}
