#include<iostream>
#include<cmath>
using namespace std;

void quad(double a,double b,double c);

int main()
{
    double a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;

    quad(a,b,c);

    return 0;
}
void quad(double a,double b,double c)
{
    double root1,root2,imag1,imag2;
    double disc=(pow(b,2)-4*a*c);

    if(disc>0)
    {
        root1=(-b+(sqrt(disc)))/(2*a);
        root2=(-b-(sqrt(disc)))/(2*a);
        cout<<"Solutions: x="<<root1<<" x="<<root2<<'\n';
    }
    
    else if(disc<0)
    {
        // will take negative of disc in sqrt to get value as iota is taken comman 
        root1=(-b/2*a);
        imag1=(-sqrt(-disc))/(2*a);
        root2=(-b/2*a);
        imag2=-(sqrt(-disc))/(2*a);
        cout<<"Complex Solutions: x="<<root1<<"+"<<imag1<<"i"<<" x="<<root2<<"+"<<imag2<<"i"<<'\n';
    }
    else 
    {
        root1=-b/2*a;
        cout<<"Solution: x="<<root1<<'\n';
    }
}