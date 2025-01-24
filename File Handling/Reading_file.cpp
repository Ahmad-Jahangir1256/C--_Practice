#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the file "example.txt" for reading
    std::ifstream file("example.txt");
    if (!file.is_open()) {
        // Print an error message if the file cannot be opened
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string line;
    // Read the file line by line and print each line to the console
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();
    return 0;
}