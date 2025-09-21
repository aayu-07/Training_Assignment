#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout<<"enter four numbers: ";
    cin>>a>>b>>c>>d;
    int largest=a;
    if(b>largest) largest = b;
    if(c>largest) largest = c;
    if(d>largest) largest = d;
    cout<<"the largest number is: "<<largest<<endl;

    return 0;
}