/*Question: Declare a structure Time with fields hours and minutes.
i. Declare another structure Flight with fields to store flight ID, arrival time and departure time.
ii. Define a function input(Flight *) which allows users to enter data for a flight.
iii. Define another function display(Flight *) which displays the data for a flight.*/
#include <iostream>
using namespace std;
struct Time
{
int hours;
int minutes;
};
struct Flight
{
int flightID;
Time arrivalTime;
Time departureTime;
};
void input(Flight &f)
{
cout << "Enter Flight ID: ";
cin >> f.flightID;
cout << "Enter Departure Time (hours minutes): ";
cin >> f.departureTime.hours >> f.departureTime.minutes;
cout << "Enter Arrival Time (hours minutes): ";
cin >> f.arrivalTime.hours >> f.arrivalTime.minutes;
}
void display(const Flight &f)
{
cout << "Flight ID: " << f.flightID << endl;
cout << "Departure Time: " << f.departureTime.hours << ":" << f.departureTime.minutes <<
endl;
cout << "Arrival Time: " << f.arrivalTime.hours << ":" << f.arrivalTime.minutes << endl;
}
int main()
{
Flight flight;
input(flight);
display(flight);
return 0;
}