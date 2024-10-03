#include<iostream>
using namespace std;

bool isSymmetrical(int num);

int main()
{
    int number;
    cout<<"Enter a three-digit number:";
    cin>>number;

    if(number>1000 || number<100)
    {
        cout<<"You did not entered a three-digit number!";
        return 0;
    }
    
    bool check=isSymmetrical(number);

    if(check==1)
    {
        cout<<"The number is symmetrical!"<<'\n';
    }
    else
    {
        cout<<"The number is not symmetrical!"<<'\n';
    }

    return 0;
}
bool isSymmetrical(int num)
{
    int digit1,digit3;
    digit3=num%10;
    num=num/100;
    digit1=num%10;
    
    return (digit1==digit3)?true:false;
}