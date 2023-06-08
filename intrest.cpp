#include<iostream>
using namespace std;
int main()
{
    int p,t,r;
    long intrest=0;
    cout<<"\n Enter the principal: "; cin>>p;
    cout<<"\n Enter the Rate: "; cin>>r;
    cout<<"\n Enter the time: "; cin>> t;
    for( int i=1; i<=t ;i++)
    {
      intrest=p+p*r/100;
      p=intrest; 
    }
     cout<<"\n Your amount is: "<<intrest<<endl;

    return 0;
}