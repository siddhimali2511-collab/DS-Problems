#include <iostream>
using namespace std;

// pass by value (a copy of the original(actual value) is taken)

// void doSomethig(int num)
// {
//     cout << num << "\n";
//     num = num + 5;
//     cout << num << "\n";
//     num += 5;
//     cout << num << "\n";
// }

// int main()
// {

//     int a;
//     cout << "Enter the number: "; // 10
//     cin >> a;
//     doSomethig(a);

//     cout << a; // the output is still 10 because a "copy" of the argument goes to the function and its value int he code remains intact

//     return 0;
// }

// pass by refrence(Address of the original(actual value) is taken)
//if an array is passed, it always passes by refrence!

void doSomethig(int &num)
{
    cout << num << "\n";
    num = num + 5;
    cout << num << "\n";
    num += 5;
    cout << num << "\n";
}

int main()
{

    int a;
    cout << "Enter the number: "; // 10
    cin >> a;
    doSomethig(a);

    cout << a; // the output is still 10 because a "copy" of the argument goes to the function and its value int he code remains intact

    return 0;
}
