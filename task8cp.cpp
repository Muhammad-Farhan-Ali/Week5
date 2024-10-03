#include<iostream>
using namespace std;

string OddishOrEvenish(int num);

int main()
{
    int number;
    cout<<"Enter a five-digit number:";
    cin>>number;

    if(number<10000 || number>100000)
    {
        cout<<"You did not enter a five-digit number!";
        return 0;
    }

    string result=OddishOrEvenish(number);
    cout<<result<<'\n';

    return 0;
}
string OddishOrEvenish(int num)
{
    int digit1,digit2,digit3,digit4,digit5;

    digit1=num%10;
    num=num/10;
    digit2=num%10;
    num=num/10;
    digit3=num%10;
    num=num/10;
    digit4=num%10;
    num=num/10;
    digit5=num%10;
    num=num/10;

    int total=digit1+digit2+digit3+digit4+digit5;

    return (total%2==0)?"Evenish":"Oddish";
}