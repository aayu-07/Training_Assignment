#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the student's score (0-100): ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Invalid score!" << endl;
    }
    else if (score >= 90) {
        cout << "Grade: A+" << endl;
    }
    else if (score >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (score >= 70) {
        cout << "Grade: B+" << endl;
    }
    else if (score >= 60) {
        cout << "Grade: B" << endl;
    }
    else if (score >= 40) {
        cout << "Grade: C" << endl;
    }
    else if (score >= 30) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }

    return 0;
}