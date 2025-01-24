#include <iostream>
using namespace std;

int main ()
{
    int sum = 0; // Initialize sum to 0
    int i = 1; // Initialize i to 1

    do   //this runs at least once
    {
        sum += i; // Add i to sum
        i++; // Increment i by 1
    } while (i <= 10); // Continue the loop while i is less than or equal to 10

    cout << "The sum of the first 10 positive integers is " << sum << endl; // Output the result
    return 0;
}