/*Question: Write a C++ program (use if-else statement) to compute the telephone bill for the city
consumers. The bill is computed according to the number of calls.
• If numbers of calls are less than and equal to 100, then the rate per call is rs.0.80 and the
meter charges is Rs. 250.
• If the number of calls are greater than 100, then the rate per call is computed is Rs. 1.00 and
the meter charges are minimum Rs.350. Formula for bill calculation is: Phone Bill = meter
charges + (number of calls x rate per call). */
#include <iostream>
using namespace std;
int main()
{
int calls;
float rate,charges,bill;
cout << "Enter number of calls=";
cin >> calls;
if (calls<=100)
{
rate=0.80;
charges = 250;
}
else
{
rate=1.00;
charges = 350;
}
bill = charges + (calls * rate);
cout <<endl << "Your Phone bill is =" << bill << endl;
return 0;
}