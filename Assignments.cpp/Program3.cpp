/*Question: A person is running in a circular ground. Write a program in C++ that asks the user to input
the radius of the ground in meters and the number of rounds the person completes. The program
should display the total distance travelled by the person in meters. (Hint: Formula for distance =
circumference*rounds). */
#include <iostream>
using namespace std;
int main()
{
const float pi=3.14;
float distance , laps , circumference , radius;
cout << "Enter radius of track =";
cin >> radius;
cout <<endl << "Enter number of laps completed =";
cin >> laps;
circumference=2*pi*radius;
distance=circumference*laps;
cout <<endl << "Total distance =" << distance;
return 0;
}