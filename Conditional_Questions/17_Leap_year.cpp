#include <iostream>
using namespace std;

int main() {
    int sy,ey;
    cout << "Enter the start year: ";
    cin >>sy;
    cout << "Enter the end year: ";
    cin >>ey;

    cout<<"Leap years between "<<sy<< " and " <<ey<< " are:\n";

    for (int i=sy;i<=ey;i++) {
        if ((i%400==0) || (i%4==0 && i%100!=0)) {
            cout<<i<< " "<<endl;
        }
    }
    return 0;
}