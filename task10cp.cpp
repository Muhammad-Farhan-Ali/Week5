#include<iostream>
using namespace std;

string text(int num);

int main()
{
    int number;
    string text_number;
    cout<<"Enter a number between (1-99):";
    cin>>number;

    if(number>99 || number<1)
    {
        cout<<"Not in scope"<<'\n';
        return 0;
    }

    text_number=text(number);
    cout<<text_number<<'\n';

    return 0;
}
string text(int num)
{
    if(num<10)
    {
        switch(num)
        {
            case 1:return "One";break;
            case 2:return "Two";break;
            case 3:return "Three";break;
            case 4:return "Four";break;
            case 5:return "Five";break;
            case 6:return "Six";break;
            case 7:return "Seven";break;
            case 8:return "Eight";break;
            case 9:return "Nine";break;
        }
    }
    else if(num<20)
    {
        switch(num)
        {
            case 11:return "One";break;
            case 12:return "Two";break;
            case 13:return "Three";break;
            case 14:return "Four";break;
            case 15:return "Five";break;
            case 16:return "Six";break;
            case 17:return "Seven";break;
            case 18:return "Eight";break;
            case 19:return "Nine";break;
        }
    }
    
    else if(num>20)
    {
    int digit2 = num%10;
    num=num/10;
    int digit1 = num%10;
    string tens_digit,units_digit;

        switch(digit1)
        {
            case 2:tens_digit= "Twenty";break;
            case 3:tens_digit= "Thirty";break;
            case 4:tens_digit= "Forty";break;
            case 5:tens_digit= "Fifty";break;
            case 6:tens_digit= "Sixty";break;
            case 7:tens_digit= "Seventy";break;
            case 8:tens_digit= "Eighty";break;
            case 9:tens_digit= "Ninty";break;
        }
    units_digit=text(digit2);

    return tens_digit+units_digit;
    }
}