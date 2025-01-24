/* Question: Write a program that prompts the user to enter a positive integer and then output both the
individual digits and the sum of the digits for example
Number = 1234
Sum = 1+ 2+ 3+ 4 = 10 */ 
#include <iostream>
using namespace std;
int main() 
{
    int num, digit, i, sum = 0;
    cout << endl << "Enter a positive integer = ";
    cin >> num;
    i = num;
    cout << "Digits: ";
    while (i > 0) 
    {
        digit = i % 10;
        cout << digit;
        if (i / 10 > 0) 
        {
            cout << " + ";
        }
        sum += digit;
        i /= 10;
    }
    cout << " = " << sum << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}