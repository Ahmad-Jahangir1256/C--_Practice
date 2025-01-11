#include <iostream>
using namespace std;
int main ()
{
    const int a = 10;
    cout << a << " is a Constant" << endl;
    // a = 20; // This will throw an error
    const float pi =3.14;
    cout << pi << " is a Constant" << endl;
    //These values cannot be changed and altered
    return 0;
}