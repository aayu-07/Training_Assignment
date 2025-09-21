// Write a program to input three characters from the user and 
// display characters with their corresponding ASCII codes. 


#include <iostream>
using namespace std;

int main() {
   char ch1, ch2, ch3;
   cout<<"Enter a three character: ";
   cin>>ch1>>ch2>>ch3;
   cout<<"ASCII character is : "<<ch1<<" and their ASCII code is : "<<int(ch1)<<endl;
   cout<<"ASCII character is : "<<ch2<<" and their ASCII code is : "<<int(ch2)<<endl;
   cout<<"ASCII character is : "<<ch3<<" and their ASCII code is : "<<int(ch3)<<endl;

    return 0;
}