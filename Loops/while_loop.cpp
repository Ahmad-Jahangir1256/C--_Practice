#include <iostream>
using namespace std;
int main ()
{
    int sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    cout << "The sum of the first 10 positive integers is " << sum << endl;
    return 0;
}