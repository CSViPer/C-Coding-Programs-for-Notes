//Inverted Triangle Pattern in C++

// C++ program to print rotated triangle pattern using
// Nested for loop
 
#include <iostream>
using namespace std;
 
// Function to print rotated triangle pattern of 2*n-1 rows
// and n columns
void printRotatedTriangle(int n)
{
    // First we print upper n rows out of the total 2*n-1
    // rows
    for (int i = 1; i <= n; i++) {
 
        // j iterates till i to print i number of stars
        // (*) in the (i)th row separated with one space
        for (int j = 1; j <= i; j++) {
              //Printing stars separated by one space
            cout << "*" << " ";
        }
        // line ends after printing i stars in (i)th row
        cout << endl;
    }
    // Now, we print other (n-1) rows of the triangle
    for (int i = 1; i <= n - 1; i++) {
 
        // j iterates till n-i to print n-i number of
        // stars (*) in the (i)th row separated with one
        // space
        for (int j = 1; j <= n - i; j++) {
              //Printing stars separated by one space
            cout << "*" << " ";
        }
        // line ends after printing n-i stars in (i)th row
        cout << endl;
    }
}
 
//Driver Code
int main()
{
 
    int n = 5;
    //Function Call
    printRotatedTriangle(n);
    return 0;
}

/*Explanation:
This C++ code is designed to print an inverted triangle pattern of stars. It uses nested loops to achieve this pattern. Let's break down the code:

The printRotatedTriangle function takes an integer n as an argument, representing the number of rows in the inverted triangle.

Inside the function:

The first loop (for (int i = 1; i <= n; i++)) is responsible for printing the upper part of the inverted triangle. It iterates from 1 to n.

The second loop (for (int j = 1; j <= i; j++)) is nested inside the first loop and is responsible for printing stars in each row. The number of stars in each row is equal to the current value of i. The stars are separated by spaces.

After printing stars in a row, a newline character is added to move to the next line.

The third loop (for (int i = 1; i <= n - 1; i++)) is responsible for printing the lower part of the inverted triangle. It iterates from 1 to n - 1.

The fourth loop (for (int j = 1; j <= n - i; j++)) is nested inside the third loop and is responsible for printing stars in each row. The number of stars in each row is equal to n - i.

After printing stars in a row, a newline character is added to move to the next line.

The main function initializes the variable n to 5 and calls the printRotatedTriangle function with this value. Consequently, the code will print an inverted triangle pattern with 5 rows in the upper part and 4 rows in the lower part, forming a total of 9 rows.

OUTPUT:
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/