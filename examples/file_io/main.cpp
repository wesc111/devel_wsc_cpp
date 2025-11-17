#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file for writing: " + filename);
    }
    
    for (const auto& line : lines) {
        file << line << std::endl;
    }
    
    file.close();
    std::cout << "Successfully wrote to " << filename << std::endl;
}

std::vector<std::string> readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file for reading: " + filename);
    }
    
    std::vector<std::string> lines;
    std::string line;
    
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    
    file.close();
    return lines;
}

int main() {
    const std::string filename = "example.txt";
    
    std::cout << "File I/O Example" << std::endl;
    std::cout << "=================" << std::endl;
    
    // Write to file
    std::vector<std::string> dataToWrite = {
        "This is line 1",
        "This is line 2",
        "This is line 3",
        "Hello from C++!"
    };
    
    try {
        writeToFile(filename, dataToWrite);
        
        // Read from file
        std::cout << "\nReading from " << filename << ":" << std::endl;
        std::vector<std::string> dataRead = readFromFile(filename);
        
        for (size_t i = 0; i < dataRead.size(); ++i) {
            std::cout << "Line " << (i + 1) << ": " << dataRead[i] << std::endl;
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
