#include<iostream>
using namespace std;

void sum(int num1,int num2);

int main()
{
    int num1,num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    sum(num1,num2);
    return 0;
}
void sum(int num1,int num2)
{
    cout<<"Sum is "<<num1+num2;
}