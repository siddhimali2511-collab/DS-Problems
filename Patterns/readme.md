STEPS TO FOLLOW WHILE SOLVING ANY PATTERN PROBLEM:

(1) for the outer loop, count the no. of lines

(2) for the inner loop, focus on the columns,
    & connect them somehow to the
    rows

(3) Print them '*' inside the inner for loop

(4) Observe symmetry (optional)

BOILER PLATE:
<!--

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    
}

int main()
{

    int a;
    cout << "enter the no.: ";
    cin >> a;
    pattern(a);

    return 0;
}

-->

General logic:
1. i = rows
   j = columns

2. Rectangel -> i=j = any constants

3. Triangle -> 
    1. Star triangle: i and j different, do according to normal logic.
    2. no. triangle: 
        1. all row items are same: print i inside j loop.
        2. row items are different(incresing, decresing etc.)
           1. i++ : normal triangle  
           2. i-- : upside down triangle
           3. j++ : nos increase in a row
           4. j-- : nos decrease in a row
           5. i always iterates from 1->n or n->1(according to increment decrement).
           6. j iterates 3 ways
               1. 1 -> i : rows start at 1  
               2. i -> 1 : row's start is largest of the line and ends in 1
               1. n -> n - i + 1 : rows start at n 
               1. n - i + 1 -> n : row's start is smallest of the line and ends in 1
    3. Alphabet triangle: all the same rules of the number triangle
       Rules:
       1. Can only iterate form char to char
       2. Can only print from char to char
       3. addition can be done between char and int(eg.: char 'A' + 1 = B)     

5. For designs like isoceles triangle -> we use [space]-[character]-[space] pattern and write 3 indevidual loops for each inside the main i loop. j for each loop runs based on the number of that space or character needed(formula calculated through observation and should contain i, n is also sometimes required).(pattern 7,8)

6. Symmetry -> 
    1. can be a straigh mix of two(or more) indevidual patterns.(pattern 9, 12).
    2. can be done using the if condition to reverse the printing pattern(by iterating j to that certain no.) after a certain n.(pattern 10)

7. Alternating numbers -> initialize a start int outside of all loops and use if condition to see the start of the row, for certain row number(s), change the start inside the loop to its opposite, and then alternate using 1-int(for 0,1)(pattern 11)

8. For continuous numbers -> initialize a no. outside of the loop and then increment it on each print(i.e. inside the j loop)(pattern 13)

9. patterns with ABC -> alphabets can be treated as numbers!, just initiate char 'A'(eg.: 'A'+1 -> 'B').(pattern 14, 15, 16)

