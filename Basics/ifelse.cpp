#include <iostream>
using namespace std;

int main()
{
    /* take age as input and output if adult or not.


    int age;

    cout << "enter the age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "you are a minor";
    }
    */

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.


    int x;
    cout << "Enter your grade: ";
    cin >> x;

    if (x >= 80)
    {
        cout << "your grade is: A";
    }

    else if (x >= 60)
    {
        cout << "your grade is: B";
    }

    else if (x >= 50)
    {
        cout << "your grade is: C";
    }

    else if (x > 40)
    {
        cout << "your grade is: D";
    }

    else if (x >= 30)
    {
        cout << "your grade is: E";
    }

    else if (x <= 29)
    {
        cout << "your grade is: F";
    }

    */

    /*
    Take the age from the user and then decide accordingly
    1. If age < 18,
       print-> not eligible for job
    2. If age >= 18,
       print-> "eligible for job"
    3. If age >= 55 and age <= 57,
       print-> "eligible for job, but retirement soon."
    4. If age > 57
       print-> "retirement time"
    */

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 18)
    {
        cout << "Not eligible for a job";
    }
    else if (age <= 75)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon.";
        }
    }
    else
    {
        cout << "Retirement time";
    }

    return 0;
}