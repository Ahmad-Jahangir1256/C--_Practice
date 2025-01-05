#include <iostream>
using namespace std;

int main ()
{
    int num; // int typically allocates 4 bytes of memory
    cout << "Enter a number: ";
    // Taking input from user, allocating 4 bytes of memory, and storing the value in the variable
    cin >> num;
    cout << "The number you entered is: " << num;
    cout << endl << endl << endl << endl << endl;


    char ch; // char typically allocates 1 byte of memory
    cout << "Enter a character: ";
    // Taking input from user, allocating 1 byte of memory, and storing the value in the variable
    cin >> ch;
    cout << "The character you entered is: " << ch;
    cout << endl << endl << endl << endl << endl;


    float f; // float typically allocates 4 bytes of memory
    cout << "Enter a floating-point number: ";
    // Taking input from user, allocating 4 bytes of memory, and storing the value in the variable
    cin >> f;
    cout << "The floating-point number you entered is: " << f;
    cout << endl << endl << endl << endl << endl;


    double d; // double typically allocates 8 bytes of memory
    cout << "Enter a double-precision floating-point number: ";
    // Taking input from user, allocating 8 bytes of memory, and storing the value in the variable
    cin >> d;
    cout << "The double-precision floating-point number you entered is: " << d;
    cout << endl << endl << endl << endl << endl;


    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "The string you entered is: " << str;
    cout << endl << endl << endl << endl << endl;
    
    return 0; // Return 0 to indicate successful execution
}