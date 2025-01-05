//Modulus basically returns the reminder of the division of two numbers. It is represented by the % operator. For example, 10 % 3 will return 1 because 10 divided by 3 is 3 with a remainder of 1.
// The modulus operator is useful in many applications, such as determining if a number is even or odd, or if a number is divisible by another number. In this example, I will demonstrate how to use the modulus operator to calculate the modulus of two numbers and output the result.

#include <iostream>
using namespace std;
int main ()
{
    int a = 10; // Declare and initialize an integer variable a with value 10

    int b = 20; // Declare and initialize an integer variable b with value 20

    int mod = a % b; // Declare an integer variable mod and store the result of a % b

    // Output the modulus of a and b directly using the expression (a % b)
    cout << "Modulus of a and b is : " << (a % b) << endl;

    // Output the modulus of a and b using the mod variable
    cout << "Modulus of a and b is : " << mod << endl;

    return 0; // Return 0 to indicate successful execution
}