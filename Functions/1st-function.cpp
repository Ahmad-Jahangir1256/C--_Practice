#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b)
{
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b)
{
    return a * b;
}

// Function to divide two numbers
int divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return a / b;
}

// Main function
int main()
{
    // Declare variables
    int a, b;

    // Prompt user to enter the first number
    cout << "Enter the first number: ";
    cin >> a;

    // Prompt user to enter the second number
    cout << "Enter the second number: ";
    cin >> b;

    // Display the results of the arithmetic operations
    cout << a << " + " << b << " = " << add(a, b) << endl;

    cout << a << " - " << b << " = " << sub(a, b) << endl;
    
    cout << a << " * " << b << " = " << mul(a, b) << endl;
    
    cout << a << " / " << b << " = " << divide(a, b) << endl;

    // Return 0 to indicate successful execution
    return 0;
}
