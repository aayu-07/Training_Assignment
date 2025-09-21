#include<iostream>
using namespace std;

float avg(int a,int b, int c)
{
    
    return (a+b+c)/3.0;
}

int main(){
    int a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    
    cout<<"the avg of three number is : "<<avg(a,b,c)<<endl;


    return 0;
}