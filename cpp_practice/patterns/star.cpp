#include<iostream>
using namespace std;
void Star_Pattern(int n)
{
    //first half
    for(int i=1;i<=n;i=i+2)
    {
        //spaces
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //second half
    for(int i=1;i<=n;i+=2)
    {
        //spaces
        for(int k=i;k>=2;k--)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    Star_Pattern(n+2);
}