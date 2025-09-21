#include <iostream>
using namespace std;

int main() {
    int n;
    double fact=1;
    cout << "Enter a natural number : ";
    cin>>n;
    if(n<=0) {
        cout<<"Please enter a natural number"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}
