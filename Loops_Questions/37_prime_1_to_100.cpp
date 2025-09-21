#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1) return false;
    for(int i=2;i*i<=num;i++) {
        if(num%i==0)
            return false;
    }
    return true;
}
int main(){
    cout<<"Prime numbers between 1 to 100 are:"<<endl;
    for(int i=2;i<100;i++) {
        if(isPrime(i)){
            cout<<i <<" ";
        }
    }
    return 0;
}
