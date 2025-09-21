#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n<=0){
        cout<<"number should be positive"<<endl;
        return 0;
    }
    int first=0,second=1,next;
    if (n==1) {
        cout<<n<<"th term of Fibonacci series is: 0"<<endl;
        return 0;
    }
    else if(n==2) {
        cout<<n<<"th term of Fibonacci series is: 1"<<endl;
        return 0;
    }
    for(int i=3;i<=n;i++){
        next=first+second;
        first=second;
        second=next;
    }
    cout<<n<<"th term of Fibonacci series is: "<<second<<endl;
    return 0;
}