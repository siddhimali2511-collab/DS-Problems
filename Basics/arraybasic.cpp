#include <iostream>
using namespace std;

int main()
{
    // // 1D array
    // int arr[5];

    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // cout << arr[0] << "\n";

    // arr[1] += 10;
    // cout << arr[1] << "\n";

    // arr[2] = 30;
    // cout << arr[2] << "\n";

    // // 2D array
    // int arrtwo[3][5];
    // arrtwo[2][4] = 30;
    // cout << arrtwo[2][4];

    // TAKING THE INPUT IF AN ARRAY
    // if an array is passed in a function, it always passes by refrence!
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    // cout << arr[0];

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}