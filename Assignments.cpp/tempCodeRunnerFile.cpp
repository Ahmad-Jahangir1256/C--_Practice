#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the value of variable a: ";
    cin >> a;
    cout << "Enter the value of variable b: ";
    cin >> b;
    Swap(a, b);
    cout << "The value of variable a is=" << a << endl;
    cout << "The value of variable b is=" << b << endl;
    return 0;
}