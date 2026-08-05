#include <iostream>
using namespace std;

void numPrint(int i, int n)
{
    if (i > n)
        return;
    numPrint(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    numPrint(1, n);
}