#include <iostream>
using namespace std;
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1,num2;
    cout<<"enter two number: ";
    cin>>num1>>num2;
    if (num1<=0 || num2<=0) {
        cout<<"number cann't br negatve"<<endl;
        return 0;
    }
    cout << "HCF of "<<num1<<" and "<<num2<<" is: "<<hcf(num1,num2)<<endl;
    return 0;
}
