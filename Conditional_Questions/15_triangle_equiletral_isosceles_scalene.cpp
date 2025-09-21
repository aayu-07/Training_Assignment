#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "The given sides do not form a valid triangle." << endl;
    }
    else if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles triangle" << endl;
    }
    else {
        cout << "Scalene triangle" << endl;
    }

    return 0;
}