#include <iostream>
using namespace std;

int main() {
    int m,y;
    cout<<"Enter month (1-12): ";
    cin>>m;
    cout<<"Enter year: ";
    cin>>y;
    int d;
    if (m<1 || m>12) {
        cout<<"Invalid month! Please enter a value between 1 and 12."<<endl;
        return 0;
    }
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            d = 31;
            break;
        case 4: case 6: case 9: case 11:
            d = 30;
            break;
        case 2: 
            if ((y%400==0) || (y%4==0 && y%100!=0)) {
                d = 29;
            } else {
                d=28;
            }
            break;
    }

    cout<<"Number of days in month "<<m<<" of year "<<y<<" is: "<<d<<endl;

    return 0;
}