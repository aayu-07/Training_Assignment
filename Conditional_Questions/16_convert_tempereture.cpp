#include <iostream>
using namespace std;

int main() {
    double temp, converted;
    int choice;

    cout << "Type '1' for Fahrenheit to Celsius\n";
    cout << "Type '2' for Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << converted << " °C" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << converted << " °F" << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

        return 0;
}