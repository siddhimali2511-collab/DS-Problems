#include <iostream>
using namespace std;

void numPrint(int n, int i)
{
    if (n < i)
        return;
    cout << n << endl;
    numPrint(n - 1, i);
}

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    numPrint(n,1);
}