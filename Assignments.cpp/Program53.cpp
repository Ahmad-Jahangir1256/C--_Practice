/*Question: Write a program using functions that will initialize an array with N random numbers
 in the range 1-999 and count the number of integers whose value is less than the 
 average value of the integers. Your program is to display the average integer value 
 and the count of integers less than average. Hint: Divide the program into functions
 depending on what you want to do i.e. initialize, find average, count numbers less 
 than average value. Main can be used to call the functions.*/

#include <iostream>
#include <cstdlib>
using namespace std;
void InitializeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 999 + 1;
    }
}
double FindAverage(int arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
int CountNumbersLessThanAverage(int arr[], int n, double average)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < average)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    InitializeArray(arr, n);
    double average = FindAverage(arr, n);
    cout << "Average integer value: " << average << endl;
    cout << "Count of integers less than average: " << CountNumbersLessThanAverage(arr, n, average) << endl;
    return 0;
}