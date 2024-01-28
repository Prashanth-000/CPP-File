#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"\t\tBUTTERFLY\n";
cout<<"Enter N(4 is best!)\n";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=8;j++)
    {
        if(j<=i||j+i>=9)
        {
            cout<<"*\t";
        }
        else{
            cout<<" \t";
        }
    }
    cout<<"\n\n";

}
for(i=n;i>=1;i--)
{
    for(j=8;j>=1;j--)
    {
        if(j<=i||j+i>=9)
        {
            cout<<"*\t";
        }
        else{
            cout<<" \t";
        }
    }
    cout<<"\n\n";

}
}
