#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int i=a,j=b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (i*j)/a;
}

int main() {
    int num1,num2;
    cout<<"Enter two natural numbers: ";
    cin>>num1>>num2;

    if(num1<=0 || num2<=0){
        cout<<"number is not positive"<<endl;
        return 0;
    }

    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm(num1,num2)<<endl;

    return 0;
}
