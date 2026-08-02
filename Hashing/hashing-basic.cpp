//

#include <iostream>
using namespace std;

int main()
{

    // take an array input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "enter the number of quries: ";
    cin >> q;

    while (q--)
    {
        int num;
        cout << "query no. : ";
        cin >> num;

        cout << hash[num] << endl;
    }

    return 0;
}
