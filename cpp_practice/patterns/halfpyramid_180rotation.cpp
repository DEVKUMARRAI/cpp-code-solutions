#include<iostream>
using namespace std;
void Half_Pyramid_180_Rotation(int n)
{
    for(int i=1;i<=n;i++)
    {
        //WhiteSpaces
        for(int j=i;j<n;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int size;
    cout<<"Enter the Size"<<endl;
    cin>>size;
    Half_Pyramid_180_Rotation(size);
}