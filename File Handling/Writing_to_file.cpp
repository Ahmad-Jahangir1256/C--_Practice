#include <iostream>
#include <fstream>

int main() 
{
    // Create and open a text file
    std::ofstream outFile("example.txt");
    
    // Check if the file is open
    if (outFile.is_open()) 
    {
        // Write to the file
        outFile << "Hello, file!" << std::endl;
        
        // Close the file
        outFile.close();
        
        // Inform the user that writing was successful
        std::cout << "Successfully wrote to the file." << std::endl;
    } 
    else 
    {
        // Inform the user that the file could not be opened
        std::cerr << "Unable to open file for writing." << std::endl;
    }
    
    return 0;
}
