#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double num1,num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;

    cout<<"Greater number: "<<max(num1,num2)<<'\n';

    return 0;
}