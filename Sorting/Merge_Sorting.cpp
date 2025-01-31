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
    // Merge Sort
    void mergeSort(int arr[], int l, int r);
    void merge(int arr[], int l, int m, int r);
    mergeSort(arr, 0, n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}