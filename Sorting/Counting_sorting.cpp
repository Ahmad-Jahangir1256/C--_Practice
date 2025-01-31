#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int count[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}