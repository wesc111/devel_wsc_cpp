#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

void vectorExample() {
    std::cout << "\n=== Vector Example ===" << std::endl;
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::cout << "Initial vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    numbers.push_back(6);
    numbers.push_back(7);
    
    std::cout << "After push_back: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Size: " << numbers.size() << std::endl;
}

void mapExample() {
    std::cout << "\n=== Map Example ===" << std::endl;
    std::map<std::string, int> ages;
    
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    std::cout << "Ages:" << std::endl;
    for (const auto& pair : ages) {
        std::cout << "  " << pair.first << ": " << pair.second << std::endl;
    }
    
    std::string name = "Bob";
    std::cout << name << "'s age: " << ages[name] << std::endl;
}

void setExample() {
    std::cout << "\n=== Set Example ===" << std::endl;
    std::set<int> uniqueNumbers;
    
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(2);
    uniqueNumbers.insert(8);
    uniqueNumbers.insert(2);  // Duplicate, won't be added
    uniqueNumbers.insert(1);
    
    std::cout << "Unique numbers (sorted): ";
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Size: " << uniqueNumbers.size() << std::endl;
    
    if (uniqueNumbers.find(2) != uniqueNumbers.end()) {
        std::cout << "2 is in the set" << std::endl;
    }
}

int main() {
    std::cout << "Data Structures Examples" << std::endl;
    std::cout << "========================" << std::endl;
    
    vectorExample();
    mapExample();
    setExample();
    
    return 0;
}
