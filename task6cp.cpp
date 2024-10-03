#include<iostream>
using namespace std;

string checkAlphabetCase(char alphabet);

int main()
{
    char alphabet;
    cout<<"Enter a character (A/a):";
    cin>>alphabet;

    string answer=checkAlphabetCase(alphabet);
    cout<<answer<<'\n';

    return 0;
}
string checkAlphabetCase(char alphabet)
{
    return (alphabet == 'A')?"You have enterd capital A":"You have entered small a";
}