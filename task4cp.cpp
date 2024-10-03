#include<iostream>
#include<cmath>
#define pi 3.1415926 
using namespace std;

double height(double distance,double angle);

int main()
{
    double distance,angle,h;
    cout<<"Enter the distance from base of tree (in feet):";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees):";
    cin>>angle;
    h= height(distance,angle);
    cout<<"The height of tree is: "<<h<<'\n';

    return 0;
}
double height(double distance,double angle)
{
    //tan(angle)=p/b
    //angle in radian
    return tan(angle*pi/180)*distance;
}