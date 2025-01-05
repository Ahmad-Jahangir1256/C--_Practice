#include <iostream>
using namespace std;
int main() 
{
    int num1 = 10;                                  // Declare and initialize an integer variable (typically 4 bytes). Takes integer input (e.g., 10, -5)

    float num2 = 3.14f;                             // Declare and initialize a float variable (typically 4 bytes). Takes floating-point input (e.g., 3.14, -2.5)

    char ch = 'A';                                  // Declare and initialize a char variable (typically 1 byte). Takes a single character input (e.g., 'A', 'b')

    bool b = true;                                  // Declare and initialize a boolean variable (typically 1 byte). Takes boolean input (true or false)

    double num3 = 3.14159265358979323846;           // Declare and initialize a double variable (typically 8 bytes). Takes double-precision floating-point input

    long num4 = 1234567890;                         // Declare and initialize a long variable (typically 4 or 8 bytes depending on the system). Takes long integer input

    short num5 = 12345;                             // Declare and initialize a short variable (typically 2 bytes). Takes short integer input

    long long num6 = 1234567890123456789;           // Declare and initialize a long long variable (typically 8 bytes). Takes long long integer input

    long double num7 = 3.14159265358979323846;      // Declare and initialize a long double variable (typically more than 8 bytes, depends on the system). Takes long double-precision floating-point input

    string str = "Hi How are you?";                 // Declare and initialize a string variable (size depends on the length of the string). Takes string input

    // Output the value of the integer variable
    cout << "The value of integer is: " << num1 << endl;

    // Output the value of the float variable
    cout << "The value of float is: " << num2 << endl;

    // Output the value of the char variable
    cout << "The character is: " << ch << endl;

    // Output the value of the boolean variable
    cout << "The boolean value is: " << b << endl;

    // Output the value of the double variable
    cout << "The value of double is: " << num3 << endl;

    // Output the value of the long variable
    cout << "The value of long is: " << num4 << endl;

    // Output the value of the short variable
    cout << "The value of short is: " << num5 << endl;

    // Output the value of the long long variable
    cout << "The value of long long is: " << num6 << endl;

    // Output the value of the long double variable
    cout << "The value of long double is: " << num7 << endl;

    // Output the value of the string variable
    cout << "The string is: " << str << endl;

    return 0; // Return 0 to indicate successful execution
}