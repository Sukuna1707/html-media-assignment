#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = 3.14159 * radius * radius;
    double circumference = 2 * 3.14159 * radius;

    if (area > circumference) {
        cout << "The area of the circle is larger than the circumference." << endl;
    } else {
        cout << "The area of the circle is not larger than the circumference." << endl;
    }

    return 0;
}
