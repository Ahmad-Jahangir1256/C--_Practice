/*Question: Using a do-while loop to write a program that ask user to enter temperature in Fahrenheit
and convert it into Celsius. The program should ask the user if he/she wants to perform another
conversion. In case the user enters an 'N'the program should terminate. This is like one of the
practice task you have done [Hint Formula for conversion is:C-5/9 (F-32)] */
#include <iostream>
using namespace std;
int main()
{
    float f, celsius;
    char choice;
    do
    {
        cout << "Enter temperature in Fahrenheit" << endl;
        cin >> f;
        celsius = (5.0 / 9.0) * (f - 32);
        cout << "Temperature in Celsius = " << celsius << endl;
        cout << "If you want to do another conversion type y else enter n =" << endl;
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');
    return 0;
}