#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else if (a != b)
    {
        cout << "a is not equal to b" << endl;
    }
    else if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a < b)
    {
        cout << "a is less than b" << endl;
    }
    else if (a >= b)
    {
        cout << "a is greater than or equal to b" << endl;
    }
    else if (a <= b)
    {
        cout << "a is less than or equal to b" << endl;
    }
    return 0;
}