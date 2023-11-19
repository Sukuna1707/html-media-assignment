#include <iostream>

int main() {
    char char1, char2;
    
    std::cout << "Enter first character: ";
    std::cin >> char1;
    
    std::cout << "Enter second character: ";
    std::cin >> char2;
    
    int asciiDiff = char2 - char1;
    
    std::cout << "The difference between the ASCII values is: " << asciiDiff << std::endl;
    
    return 0;
}
