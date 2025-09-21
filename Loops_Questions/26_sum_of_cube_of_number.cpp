#include <iostream>
using namespace std;

int main() {
    int n;
    double sum=0;
    cout << "Enter a natural number : ";
    cin>>n;
    if(n<=0) {
        cout<<"Please enter a natural number"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        sum+=i*i*i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}
