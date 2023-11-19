#include <iostream>
using namespace std;

int main() {
    int markA, markB, markC;
    cout << "Enter the marks of student A: ";
    cin >> markA;
    cout << "Enter the marks of student B: ";
    cin >> markB;
    cout << "Enter the marks of student C: ";
    cin >> markC;

    if (markA <= markB && markA <= markC) {
        cout << "Student A scored the least marks." << endl;
    } else if (markB <= markA && markB <= markC) {
        cout << "Student B scored the least marks." << endl;
    } else {
        cout << "Student C scored the least marks." << endl;
    }

    return 0;
}
