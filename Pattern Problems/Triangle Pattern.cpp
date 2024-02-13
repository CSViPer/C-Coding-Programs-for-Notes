//Triangle Pattern in C++

// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart2(int n)
{
    // Number of spaces
    int i, j, k = n;
 
    // Outer loop to handle number of rows
    // n in this case
    for (i = 1; i <= n; i++) {
 
        // Inner loop for columns
        for (j = 1; j <= n; j++) {
 
            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}
 
// Driver Code
int main()
{
    int n = 5;
    // Function Call
    pypart2(n);
    return 0;
}

/*Explanation:
This C++ code is designed to print a triangle pattern of stars. It uses two nested loops to achieve this pattern. Let's break down the code:

The pypart2 function takes an integer n as an argument, representing the number of rows in the triangle pattern.

Inside the function:

int i, j, k = n;: Declares variables i for controlling the outer loop, j for controlling the inner loop for columns, and k to keep track of the number of spaces needed in each row.

The outer loop (for (i = 1; i <= n; i++)) controls the number of rows in the pattern. It starts from 1 and increments i in each iteration.

The inner loop for columns (for (j = 1; j <= n; j++)) is responsible for printing characters in each row.

The condition if (j >= k) checks if the current column index is greater than or equal to the value of k. If true, it prints a '*' character; otherwise, it prints a space.

After printing characters in a row, k-- decrements the value of k to reduce the number of spaces needed for the next row.

Finally, a newline character is added to move to the next line, creating the triangle pattern.

The main function initializes the variable n to 5 and calls the pypart2 function with this value. Consequently, the code will print a triangle pattern with 5 rows, where the first row has 1 star, the second row has 2 stars, and so on, until the last row with 5 stars.
OUTPUT:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/