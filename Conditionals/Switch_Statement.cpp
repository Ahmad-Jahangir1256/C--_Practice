#include <iostream>
using namespace std;
int main ()
{
    // Declare variables
    int a, b;
    
    // Prompt user to enter the value of a
    cout << "Enter the value of a: ";
    cin >> a;
    
    // Prompt user to enter the value of b
    cout << "Enter the value of b: ";
    cin >> b;
    
    // Check if a is equal to b
    switch (a == b)
    {
        case 1:
            cout << "a is equal to b" << endl;
            break;
    }
    
    // Check if a is not equal to b
    switch (a != b)
    {
        case 1:
            cout << "a is not equal to b" << endl;
            break;
    }
    
    // Check if a is greater than b
    switch (a > b)
    {
        case 1:
            cout << "a is greater than b" << endl;
            break;
    }
    
    // Check if a is less than b
    switch (a < b)
    {
        case 1:
            cout << "a is less than b" << endl;
            break;
    }
    
    // Check if a is greater than or equal to b
    switch (a >= b)
    {
        case 1:
            cout << "a is greater than or equal to b" << endl;
            break;
    }
    
    // Check if a is less than or equal to b
    switch (a <= b)
    {
        case 1:
            cout << "a is less than or equal to b" << endl;
            break;
    }
    
    // Return 0 to indicate successful execution
    return 0;
}