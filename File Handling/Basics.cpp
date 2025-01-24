#include <iostream>
#include <fstream> // Include fstream for file handling
using namespace std;
int main() 
{
    // Create an output file stream (ofstream) object
    std::ofstream outFile("example.txt");

    // Check if the file is open
    if (outFile.is_open()) 
    {
        // Write to the file
        outFile << "Hello, file handling in C++!" << std::endl;
        // Close the file
        outFile.close();
    } 
    else 
    {
        std::cerr << "Unable to open file for writing" << std::endl;
    }

    // Create an input file stream (ifstream) object
    std::ifstream inFile("example.txt");
    std::string line;

    // Check if the file is open
    if (inFile.is_open()) 
    {
        // Read from the file
        while (std::getline(inFile, line)) 
        {
            // Output the line to the console
            std::cout << line << std::endl;
        }
        // Close the file
        inFile.close();
    } 
    else 
    {
        std::cerr << "Unable to open file for reading" << std::endl;
    }
    return 0;
}