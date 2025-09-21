#include <iostream>
using namespace std;

int reverse(int a) {
    int r=0;
    while(a>0){
        int x=a%10;
        r*=10;
        r+=x;
        a/=10;
    }
    return r;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is "<<reverse(n);
    return 0;
}
