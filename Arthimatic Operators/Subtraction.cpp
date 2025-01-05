#include <iostream>
using namespace std;
int main ()
{
    int a = 10; // Declare and initialize an integer variable a with value 10

    int b = 20; // Declare and initialize an integer variable b with value 20

    int sub = a - b; // Declare an integer variable sub and store the result of a - b

    // Output the subtraction of a and b directly using the expression (a - b)
    cout << "Subtraction of a and b is : " << (a - b) << endl;

    // Output the subtraction of a and b using the sub variable
    cout << "Subtraction of a and b is : " << sub << endl;

    return 0; // Return 0 to indicate successful execution
}