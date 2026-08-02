// to make the last guy execute first, you put the cout after the function call

#include <iostream>
using namespace std;

void numPrint(int i, int n)
{
    if (i < 1)
        return;
    numPrint(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    numPrint(n,n);
}