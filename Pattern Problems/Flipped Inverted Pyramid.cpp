//Flipped Inverted Pyramid Pattern in C++


// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart2(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {
 
        // for spacing
        while (k <= n - i - 2) {
            cout << " ";
            k++;
        }
        k = 0;
 
        // For Pattern printing
        while (j <= i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
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
This C++ code is designed to print a flipped inverted pyramid pattern of stars. It uses two nested loops to achieve this pattern. Let's break down the code:

The pypart2 function takes an integer n as an argument, representing the number of rows in the flipped inverted pyramid.

Inside the function:

int i = 0, j = 0, k = 0;: Initializes variables i, j, and k for controlling the outer loop, inner loop for spacing, and inner loop for pattern printing, respectively.

The outer loop (while (i < n)) controls the number of rows in the pattern. It starts from 0 and increments i in each iteration.

The first inner loop (while (k <= n - i - 2)) is responsible for printing the leading spaces before the stars in each row. The number of leading spaces decreases as i increases.

k = 0;: Resets k after each iteration of the outer loop to start spacing from the beginning in the next row.

The second inner loop (while (j <= i)) prints the stars in each row. The number of stars is equal to the current value of i.

After printing the stars, a newline character is added to move to the next line, creating the flipped inverted pyramid pattern.

The main function initializes the variable n to 5 and calls the pypart2 function with this value. Consequently, the code will print a flipped inverted pyramid pattern with 5 rows, where the first row has 5 stars, the second row has 4 stars, and so on, until the last row with 1 star.

OUTPUT:
* * * * * 
  * * * * 
    * * * 
      * * 
        * 

*/