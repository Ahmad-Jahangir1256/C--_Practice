#include <iostream>     /* Used to include the iostream library/header file in the program.
                         It provides input/output functions such as cin, cout, etc. */
using namespace std;    //used to avoid having to prefix the standard library names with std::. Semiclon defines the end of the statement or line/block of code.

int main()                          //int stands for integer. main function is the entry point of the program. main denotes the main or starting point of the program. We can use int or void before main. int demands a return value(of integer data type) while void does not require a return value. 
{                        
    cout << "Hello, World!";        //cout is used to print/dispaly the output to the console.
    return 0;                       //return statement is used to return the value from the main function.Since we used int before main, we have to return an integer value.
}