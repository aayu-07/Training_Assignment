#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout<<"Armstrong numbers under 1000 are:"<<endl;
    for (int num=1;num<1000;num++){
        int temp=num,digits=0,sum=0; 
        while(temp!=0){
            temp/=10;
            digits++;
        }
        temp=num;
        while(temp!=0){
            int r=temp%10;
            sum+=static_cast<int>(pow(r,digits)+0.5);
            temp/=10;
        }
        if(sum==num){
            cout<<num<<" ";
        }
    }
    return 0;
}
