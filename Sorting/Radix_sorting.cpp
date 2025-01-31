#include <iostream>
using namespace std;
int main ()
{
    int n = 10;
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66, 0, 1};
    int output[n];
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    for (int exp = 1; max/exp > 0; exp *= 10)
    {
        int count[10] = {0};
        for (int i = 0; i < n; i++)
            count[(arr[i]/exp)%10]++;
        for (int i = 1; i < 10; i++)
            count[i] += count[i-1];
        for (int i = n-1; i >= 0; i--)
        {
            output[count[(arr[i]/exp)%10]-1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}