/*Question: Write a program to find the average of natural numbers from 1 to N using do while loop.
The value of N should be entered by the user.
[Hint Average sum of all numbers / total number of natural numbers].*/
#include <iostream>
using namespace std;
int main() 
{
    int N, sum = 0, num = 1;
    float avg;
    cout << "Enter a positive integer N: ";
    cin >> N;
    if (N <= 0) 
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    do 
    {
        sum += num;
        num++;
    } while (num <= N);
    avg = static_cast<float>(sum) / N;
    cout << "The average of natural numbers from 1 to " << N << " is: " << avg << endl;
    return 0;
}