// Inverted Pyramid Pattern in C++


// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart2(int n)
{
    // number of spaces
    int k = 2 * n - 2;
 
    // Outer loop to handle number of rows
    // n in this case
    for (int i = n; i > 0; i--) {
 
        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < n - i; j++)
            cout << "  ";
 
        // Decrementing k after each loop
        k = k - 2;
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j < i; j++) {
            // Printing stars
            cout << "* ";
        }
 
        // Ending line after each row
        cout << endl;
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
This C++ code is designed to print an inverted pyramid pattern of stars. It uses two nested loops to achieve this pattern. Let's break down the code:

The pypart2 function takes an integer n as an argument, representing the number of rows in the inverted pyramid.

Inside the function:

int k = 2 * n - 2;: Initializes k to a value that represents the number of spaces needed for formatting in each row. This value decreases as we move up the inverted pyramid.

The outer loop (for (int i = n; i > 0; i--)) controls the number of rows in the pattern. It starts from n and decrements i in each iteration.

The first inner loop (for (int j = 0; j < n - i; j++)) is responsible for printing the leading spaces before the stars in each row. The number of leading spaces decreases as i decreases.

k = k - 2;: Decrements k by 2 after each iteration of the outer loop to adjust the number of spaces for the next row.

The second inner loop (for (int j = 0; j < i; j++)) prints the stars in each row. The number of stars is equal to the current value of i.

After printing the stars, a newline character is added to move to the next line, creating the inverted pyramid pattern.

The main function initializes the variable n to 5 and calls the pypart2 function with this value. Consequently, the code will print an inverted pyramid pattern with 5 rows, where the first row has 5 stars, the second row has 4 stars, and so on, until the last row with 1 star.

OUTPUT:
* * * * * 
* * * * 
* * * 
* * 
* 

*/