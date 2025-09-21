#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if (n<0){
        cout<<n<<" is not fibonacci number"<<endl;
        return 0;
    }
   int first=0,second=1,next;
    next=first+second;
    while(next<=n){
        if(next==n) {
            cout<<n<<" is in the Fibonacci series"<<endl;
            return 0;
        }
        first=second;
        second=next;
        next=first+second;
    }
    cout<<n<<" is not in the Fibonacci series"<<endl;
    return 0;
}