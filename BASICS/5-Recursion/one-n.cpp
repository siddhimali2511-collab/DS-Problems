#include <iostream>
using namespace std;

void numPrint(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    numPrint(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    numPrint(1, n);
}