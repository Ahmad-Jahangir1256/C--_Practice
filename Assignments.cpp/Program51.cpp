/*Question: Write a function to convert temperature from Fahrenheit to Celsius. Ask the user to
enter temperature in degree Fahrenheit and then convert it to Celsius using a
 function. Celsius=(F-32)*(5/9).
Hint: 5/9 = 0.5555, if you want to use division operator, you may need to perform
 typecasting into double.*/
#include <iostream>
using namespace std;
double FahrenheitToCelsius(double fahrenheit)
{
    return ((fahrenheit - 32) * 0.5555);
}
int main()
{
    double fahrenheit;
    cout << "Enter temperature in degree Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in degree Celsius: " << FahrenheitToCelsius(fahrenheit) << endl;
    return 0;
}