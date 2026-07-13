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

3. Triangle -> i loops till n for n rows and j loops till i.(pattern 2,3,4)

<!-- 4. upside down triangle -> i's signs are always opposite of j's(so lets say if i is incrementing, j is decrementing).(pattern 5)
     1. If we want the start of the triangle to be small to large(lets say the first like is 1 2 3 4 5, then 1 2 3 4), then we initiate i at n and decrement, as j has to increment.(as in these types we print j, so there is still space for j to loop in some direction).(pattern 6)
     2. j decrements & i increments if the start of the row need to be the bigger no(5 4 3 2 1, 4 3 2 1).(pattern 12's last j for loop) -->

5. For designs like isoceles triangle -> we use [space]-[character]-[space] pattern and write 3 indevidual loops for each inside the main i loop. j for each loop runs based on the number of that space or character needed(formula calculated through observation and should contain i, n is also sometimes required).(pattern 7,8)

6. Symmetry -> 
    1. can be a straigh mix of two(or more) indevidual patterns.(pattern 9, 12).
    2. can be done using the if condition to reverse the printing pattern(by iterating j to that certain no.) after a certain n.(pattern 10)

7. Alternating numbers -> initialize a start int outside of all loops and use if condition to see the start of the row, for certain row number(s), change the start inside the loop to its opposite, and then alternate using 1-int(for 0,1)(pattern 11)

8. For continuous numbers -> initialize a no. outside of the loop and then increment it on each print(i.e. inside the j loop)(pattern 13)

9. patterns with ABC -> alphabets can be treated as numbers!, just initiate char 'A'(eg.: 'A'+1 -> 'B').(pattern 14, 15, 16)
