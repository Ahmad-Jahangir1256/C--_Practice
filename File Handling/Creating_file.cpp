#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    // Create and open a text file
    std::ofstream MyFile("example.txt");

    // Write to the file
    MyFile << "Hello, World!";

    // Close the file
    MyFile.close();

    return 0;
}
