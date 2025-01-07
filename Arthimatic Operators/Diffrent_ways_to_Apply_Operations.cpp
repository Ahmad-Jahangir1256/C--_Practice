#include <iostream>
using namespace std;
int main ()
{
    int x,y,sum=0,sub=0,prod=1,div=1,mod=1;
    cout << "Enter the values: ";
    cin >> x >> y;
    sum +=x;
    sum +=y;
    sub -=x;
    sub -=y;
    prod *=x;
    prod *=y;
    div /=x;
    div /=y;
    mod %=x;
    mod %=y;
    cout << "Sum of x and y is: " << sum << endl;
    cout << "Subtraction of x and y is: " << sub << endl;
    cout << "Product of x and y is: " << prod << endl;
    cout << "Division of x and y is: " << div << endl;
    cout << "Modulus of x and y is: " << mod << endl;
    return 0;
}