#include <iostream>

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cout << "Enter the coordinates of point 1 (x1, y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the coordinates of point 2 (x2, y2): ";
    std::cin >> x2 >> y2;

    std::cout << "Enter the coordinates of point 3 (x3, y3): ";
    std::cin >> x3 >> y3;

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        std::cout << "All three points fall on the same line." << std::endl;
    } else {
        std::cout << "The three points do not fall on the same line." << std::endl;
    }

    return 0;
}
