#include<iostream>
using namespace std;
void Rhombus_Pattern(int r,int c)
{
    for(int i=1;i<=r;i++)
    {
        //for white spaces
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        //for stars
        for(int k=1;k<=c;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cout<<"Enter the R_Size"<<endl;
    cin>>r;
    cout<<"Enter the C_Size"<<endl;
    cin>>c;
    Rhombus_Pattern(r,c);
}