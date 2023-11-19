#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        std::cout << "The character is an alphabet." << std::endl;
    } else if (ch >= '0' && ch <= '9') {
        std::cout << "The character is a digit." << std::endl;
    } else {
        std::cout << "The character is a special character." << std::endl;
    }

    return 0;
}
