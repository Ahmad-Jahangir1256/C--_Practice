/*Question: Create a function that calls "Nothing". Name of function will be "CallNothing". */
#include <iostream>
using namespace std;
void Nothing()
{
    
}
void CallNothing()
{
    Nothing();
}
int main()
{
    CallNothing();
    return 0;
}