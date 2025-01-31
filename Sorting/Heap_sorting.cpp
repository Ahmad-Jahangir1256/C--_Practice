#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        int c = i;
        while (c != 0)
        {
            int root = (c - 1) / 2;
            if (arr[root] < arr[c])
            {
                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }
            c = root;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        int root = 0;
        int c = 1;
        while (c < i)
        {
            c = 2 * root + 1;
            if (arr[c] < arr[c + 1] && c < i - 1)
                c++;
            if (arr[root] < arr[c] && c < i)
            {
                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }
            root = c;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}