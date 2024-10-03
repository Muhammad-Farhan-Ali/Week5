#include<iostream>
using namespace std;

void time_travel(int hours,int mins);

int main()
{
    int mins,hours;
    cout<<"Enter hours:";
    cin>>hours;
    cout<<"Enter minutes:";
    cin>>mins;

    if((hours>23) || (mins>59))
    {
        cout<<"Invalid input!";
        return 0;
    }

    time_travel(hours,mins);


    return 0;
}
void time_travel(int hours,int mins)
{
    //15 mins required for time travel
    mins=mins+15;
    if(mins>59)
    {
        mins=mins%60;
        hours++;
    }
    if(hours>23)
    {
        hours=0;
    }
    cout<<hours<<":"<<mins<<'\n';
}