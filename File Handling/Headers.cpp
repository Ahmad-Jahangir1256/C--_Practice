#include <iostream>  // For standard input and output
#include <fstream>   // For file stream operations
using namespace std;
int main() 
{
    // Example of writing to a file
    std::ofstream outputFile("example.txt");
    if (outputFile.is_open()) 
    {
        outputFile << "Hello, file handling in C++!" << std::endl;
        outputFile.close();
    } 
    else 
    {
        std::cerr << "Unable to open file for writing" << std::endl;
    }

    // Example of reading from a file
    std::ifstream inputFile("example.txt");
    if (inputFile.is_open()) 
    {
        std::string line;
        while (std::getline(inputFile, line)) 
        {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } 
    else 
    {
        std::cerr << "Unable to open file for reading" << std::endl;
    }

    // Example of reading and writing to a file
    std::fstream file("example.txt", std::ios::in | std::ios::out);
    if (file.is_open()) 
    {
        std::string line;
        while (std::getline(file, line)) 
        {
            std::cout << line << std::endl;
        }
        file << "Appending a new line to the file." << std::endl;
        file.close();
    } 
    else 
    {
        std::cerr << "Unable to open file for reading and writing" << std::endl;
    }
    return 0;
}