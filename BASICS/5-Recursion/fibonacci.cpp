// given integen n fid the nth fibonacci number

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return (n);
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    cout << fib(n);
}

// // or

// #include <bits/stdc++.h>
// using namespace std;

// // Recursive function to compute the Nth Fibonacci number
// int fibonacci(int N)
// {
//     // Base case: if N is 0 or 1, return N itself
//     if (N <= 1)
//     {
//         return N;
//     }

//     // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
//     int last = fibonacci(N - 1);  // (N-1)th Fibonacci
//     int slast = fibonacci(N - 2); // (N-2)th Fibonacci

//     return last + slast;
// }

// int main()
// {
//     int N = 4;
//     cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
//     return 0;
// }
