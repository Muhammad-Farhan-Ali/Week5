#include<iostream>
using namespace std;

void calculatePoolState(int V,int P1,int P2,double H);

int main()
{
    int volume,pipe1,pipe2;
    double time;

    cout<<"Enter volume of pool in liters:";
    cin>>volume;
    cout<<"Enter flowrate of first pipe per hour:";
    cin>>pipe1;
    cout<<"Enter flowrate of second pipe per hour:";
    cin>>pipe2;
    cout<<"Enter hours that the worker was absent:";
    cin>>time;

    calculatePoolState(volume,pipe1,pipe2,time);

    return 0;
}
void calculatePoolState(int V,int P1,int P2,double H)
{
    int pipe1flow,pipe2flow,poolpercent,pool;

    pool=(P1*H)+(P2*H);
    pipe1flow=((P1*H)/((P1*H)+(P2*H)))*100;
    pipe2flow=((P2*H)/((P1*H)+(P2*H)))*100;
    poolpercent=(((P1*H)+(P2*H))/V)*100;

    if(pool<=V)
    {
        cout<<"Pool is "<<poolpercent<<"% "<<"full! Pipe1: "<<pipe1flow<<"% Pipe2: "<<pipe2flow<<"%"<<"\n";
    }
    else if(pool>V)
    {
        cout<<"For "<<H<<" hours the pool overflowed "<<pool-V<<" liters!"<<'\n';
    }

}