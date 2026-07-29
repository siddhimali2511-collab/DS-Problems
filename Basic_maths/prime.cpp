// Tell fi the no. is prime or not

// Print all divisors of the given number.

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    vector<int> fac;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fac.push_back(i);

            if (i != n / i)
            {
                fac.push_back(n / i);
            }
        }
    }

    if (n == 1)
    {
        cout << "The no. you entered is 1 which is neither prime nor unprime";
    }
    else if (fac.size() == 2)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }

    return 0;
}

// else if (fac.begin() + 2 == fac.end())
// {
//     cout << "The number is prime";
// }
// else
// {
//     cout << "The number is not prime";
// }

// STRIVER METHOD USING COUNT

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if a given number is prime
// bool checkPrime(int n) {
//     int cnt = 0;  // Initialize a counter variable to count the number of factors

//     // Loop through numbers from 1 to the square root of n
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             cnt++;  // If n is divisible by i, increment the counter

//             // If n is not a perfect square, count its reciprocal factor
//             if (n / i != i) {
//                 cnt++;
//             }
//         }
//     }

//     // If the number of factors is exactly 2 (1 and the number itself), it's prime
//     if (cnt == 2) {
//         return true;
//     } else {
//         return false;  // If not, it's not a prime number
//     }
// }

// int main() {
//     int n = 1483;  // Example number
//     bool isPrime = checkPrime(n);  // Function call to check if the number is prime

//     if (isPrime) {
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }

//     return 0;
// }