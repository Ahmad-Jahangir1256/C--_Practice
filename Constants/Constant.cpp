#include <iostream>
using namespace std;
int main ()
{
    const int a = 10;
    cout << a << endl;
    // a = 20; // This will throw an error
    const float pi =3.14;
    cout << pi << endl;
    //These values cannot be changed and altered
    return 0;
}