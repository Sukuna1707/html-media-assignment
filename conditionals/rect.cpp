#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    } else {
        cout << "The area of the rectangle is not greater than its perimeter." << endl;
    }

    return 0;
}
