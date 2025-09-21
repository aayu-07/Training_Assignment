#include <iostream>
using namespace std;

int main() {
    int n,m;
   
    cout << "Enter a number: ";
    cin>>n;
    m=n;
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    cout<<"number of digit in "<<m<<" is "<<count;
    return 0;
}
