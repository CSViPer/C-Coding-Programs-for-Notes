//Printing simple pyramid pattern using for loop

// C++ code to demonstrate star pattern using recursion
#include <iostream>
using namespace std;
 
// recursive function to print * on console
void print(int n)
{
    if(n == 0) // base case
    {
        return;
    }
      cout << "* "; 
      print(n - 1); // calling recursively
}
 
// recursive function to demonstrate printing pattern
void pattern(int n)
{
    // base case
    if (n == 0) 
    {
        return;
    }
    else
    {
        // calling function recursively
        pattern(n - 1);
 
        // print "* " n times
          print(n);
       
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Function
int main()
{
    int n = 5;
    pattern(n);
}


/*
Explanation:
This C++ code is designed to print a star pattern using recursion. Let's break it down:

The print function is a recursive function that prints a star '*' on the console n times. It uses recursion to achieve this by decreasing n in each recursive call until the base case is reached (when n becomes 0), at which point it stops.

The pattern function is also a recursive function that demonstrates printing a pattern. It uses recursion to print rows of stars in a descending order. Here's what happens in each recursive call:

It calls itself with n - 1.
It then calls the print function to print stars n times.
Finally, it prints a newline character to move to the next line, creating a new row.
The main function initializes n to 5 and calls the pattern function with this value. Consequently, the pattern will have 5 rows, each with an increasing number of stars.

OUTPUT:
* 
* * 
* * * 
* * * * 
* * * * * 
*/