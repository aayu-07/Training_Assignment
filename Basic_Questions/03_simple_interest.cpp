#include <iostream>
using namespace std;

int main() {
   int p,r,t;
   cout<<"enter the principle value: "<<endl;
   cin>>p;
   cout<<"enter the rate: "<<endl;
   cin>>r;
   cout<<"enter the time: "<<endl;
   cin>>t;
   float ans=(p*r*t)/100.0;
   cout<<"simple intrest is : " <<ans;

    return 0;
}