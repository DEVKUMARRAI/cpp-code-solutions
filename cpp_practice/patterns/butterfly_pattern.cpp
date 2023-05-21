#include<iostream>
using namespace std;
void Butterfly(int n)
{
    for(int i=1;i<=n;i++)
    {
        //part 1
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=i;k<=n-1;k++)
        {
            cout<<"  ";
        }
        //part2
        for(int k=i;k<=n-1;k++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        //part 1
        for(int j=i;j<=n;j++)
        {
            cout<<"* ";
        }
        for(int k=i;k>1;k--)
        {
            cout<<"  ";
        }
        //part2
        for(int j=i;j>1;j--)
        {
            cout<<"  ";
        }
        for(int k=i;k<=n;k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Butterfly(n);
}