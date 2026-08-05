#include <iostream>
using namespace std;

void sumNum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumNum(i - 1, sum + i);
}

int main()
{
    int i;
    cout << "Enter the number n: ";
    cin >> i;

    sumNum(i, 0);
}

