//Flipped Simple Pyramid Pattern in C++

// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart(int n)
{
    // Outer loop to handle number of rows
    // n in this case
    int i = n, j = 0;
    while (i > 0) {
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        while (j < i) {
 
            // Printing stars
            cout << "* ";
            j++;
        }
        j = 0; // we have to reset j value so as it can
               // start from beginning and print * equal to
               // i.
        i--;
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int n = 5;
    pypart(n);
    return 0;
}

/*Explanation:
This C++ code is designed to print a specific pattern of stars. Let's break it down:

The pypart function is responsible for printing the star pattern. It takes an integer n as an argument, which represents the number of rows in the pattern.

Inside the function:

There are two nested loops. The outer loop (while (i > 0)) controls the number of rows in the pattern, and the inner loop (while (j < i)) controls the number of stars in each row.

The inner loop prints '*' (cout << "* ") as long as j is less than the current value of i. The j variable is used to keep track of the number of stars printed in each row.

After printing stars in a row, j is reset to 0, and i is decremented. This process continues until the outer loop completes all the rows.

The cout << endl; statement is used to move to the next line after each row to create the pattern.

The main function initializes the variable n to 5 and calls the pypart function with this value. Consequently, the code will print a pattern with 5 rows, where the first row has 5 stars, the second row has 4 stars, and so on, until the last row with 1 star.

OUTPUT:
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

*/