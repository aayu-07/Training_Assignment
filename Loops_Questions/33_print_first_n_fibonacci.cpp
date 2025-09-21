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
    
    for(int i=1;i<=n;i++) {
        if(i==1) {
            cout<<first<<" ";
        }
        else if(i==2){
            cout<<second<<" ";
        }
        else{
            next=first+second;
            cout<<next<<" ";
            first=second;
            second=next;
        }
    }
    
    return 0;
}