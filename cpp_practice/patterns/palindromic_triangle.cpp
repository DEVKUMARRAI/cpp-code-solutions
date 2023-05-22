#include<iostream>
using namespace std;
void Palindromic_Triangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        //Left Side White Spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        //Left Side Numbers
        for(int k=i;k>=1;k--)
        {
            cout<<k<<" ";
        }
        //Right Numbers
        for(int l=2;l<=i;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    Palindromic_Triangle(n);
}