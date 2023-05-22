#include<iostream>
using namespace std;
void Pattern(int size)
{
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size"<<endl;
    cin>>n;
    Pattern(n);
}