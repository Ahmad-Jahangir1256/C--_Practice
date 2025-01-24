/*Question: Write a program to calculate factorial of a number using while loop. ((n! Is factorial of n ) n=3
n!=3*2*1 0!=1) */
#include<iostream> 
using namespace std;
int main() 
{ 
    int i; 
    int n, factorial; 
    factorial = 1; 
    cout << endl << "Enter number to calculate factorial ="; 
    cin >> n; 
    i = n; 
    if (n == 0) 
    {
        cout << endl << "Factorial of 0 is 1";
    } 
    else 
    {
        while (i > 0) 
        {
            factorial = factorial * i;
            i--;
        }
        cout << endl << "Factorial of " << n << " is =" << factorial;
    }
    return 0;
}