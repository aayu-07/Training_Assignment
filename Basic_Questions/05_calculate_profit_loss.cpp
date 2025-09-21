// Write a program to ask user about the cost price and selling
// price banana per dozen. Calculate the profit or loss earned
// upon selling 25 bananas.

#include <iostream>
using namespace std;

int main()
{
    float cp, sp;
    cout << "Enter the cost price of 1 dozen banana  : " << endl;
    cin >> cp;
    cp = cp / 12.0;
    cout << "Enter the selling price of 1 dozen banana: " << endl;
    cin >> sp;
    sp = sp / 12.0;
    if (cp > sp)
    {
        cout << "selling 25 bananas loss: " << (cp - sp) * 25;
    }
    else
    {
        cout << "selling 25 bananas profit: " << (sp - cp) * 25;
    }

    return 0;
}