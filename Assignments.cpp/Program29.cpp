/*Question: : Use a pointer to traverse and modify elements of an integer array using pointer
arithmetic.  */
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter no.of values: ";
    cin >> a;
    int arr[a];
    cout << "Enter Values: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "Original array: ";
    for (int i = 0; i < a; ++i) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    ptr = arr;
    for (int i = 0; i < a; ++i) {
        *ptr = *ptr * 2;
        ptr++;
    }
    ptr = arr;
    cout << "Modified array: ";
    for (int i = 0; i < a; ++i) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}