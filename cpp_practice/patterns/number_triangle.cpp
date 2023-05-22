#include<iostream>
using namespace std;
void Number_Triangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        //spaces
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        //numbers
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    Number_Triangle(n);
}