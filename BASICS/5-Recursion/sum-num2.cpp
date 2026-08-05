#include <iostream>
using namespace std;

int sumNum(int n)
{
    if (n == 0)
        return (0);
    return (n + sumNum(n - 1));
}

int main()
{
    int i;
    cout << "Enter the number n: ";
    cin >> i;

    cout << sumNum(i);
}
