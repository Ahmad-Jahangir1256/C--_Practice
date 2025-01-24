/*Question: Write a program in C++ that accepts the values of two variables num1 and num2 from the
user and i- Add them and store the result in a third variable sum. ii- Subtract them and store the result in
a fourth variable difference. iii- Multiply them and store the result in a fifth variable product.
Display the output of this program in the following format:
Sum of__________and_______is_______
Diffrence of_______and_____is________
Product of_______and_____is_________  */
#include <iostream>
using namespace std;
int main()
{
int num1, num2, sum, product, diffrence;
cout << "Enter first number =";
cin >> num1;
cout << endl << "Enter second number =";
cin >> num2;
sum = num1 + num2;
product = num1 * num2;
diffrence = num1 - num2;
cout << endl << "Sum of " << num1 << " and " << num2 << " is " << sum;
cout << endl << "Diffrence of " << " and " << num2 << " is " << diffrence;
cout << endl << "Product of " << " and " << num2 << " is " << product;
return 0;
}