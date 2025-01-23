#include <iostream>
using namespace std;
int main ()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 5;
    int low = 0;
    int high = 10;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}