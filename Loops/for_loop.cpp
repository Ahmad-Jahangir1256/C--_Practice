#include <iostream>
using namespace std;
int main ()
{
    int sum = 0;
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Add the current value of i to sum
        sum += i;
    }
    // Output the result
    cout << "The sum of the first 10 positive integers is " << sum << endl;
    return 0;
}