#include<iostream>
using namespace std;
void Half_Number_Pyramid_Part2(int n)
{
    int counter=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Half_Number_Pyramid_Part2(n);
}