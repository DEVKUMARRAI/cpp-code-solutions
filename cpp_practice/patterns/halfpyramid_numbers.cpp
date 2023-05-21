#include<iostream>
using namespace std;
void Half_Number_Pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Half_Number_Pyramid(n);
}