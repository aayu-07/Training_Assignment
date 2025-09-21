#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num,x,r,n = 0;
    int ans=0;
    cout<<"enter a number: ";
    cin>>num;
    x=num;
    int temp=num;
    while(temp!=0) {
        temp/=10;
        n++;
    }
    temp=num;
    while(temp!=0) {
        r=temp%10;
        ans+=static_cast<int>(pow(r,n)+0.5);
        temp/=10;
    }
    if(ans==x)
        cout<<x<<" is an armstrong number "<<endl;
    else
        cout<<x<<" is not armstrong number"<<endl;
    return 0;
}
