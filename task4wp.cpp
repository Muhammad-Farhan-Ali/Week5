#include<iostream>
using namespace std;

int myFunction(int num);

int main()
{
    int number,result;
    cout<<"Enter a number:";
    cin>>number;
    result=myFunction(number);
    cout<<"Result: "<<result<<'\n';

    return 0;
}
int myFunction(int num)
{
    return num*5;
}