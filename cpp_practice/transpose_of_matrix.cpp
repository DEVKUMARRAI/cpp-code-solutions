#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int result[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j]=0;
        }
    }
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                int temp=arr[i][j];
                result[i][j]=arr[j][i];
                result[j][i]=temp;
            }
            else
            {
                result[i][j]=arr[i][j];
            }
        }
    }
    cout<<"Transpose is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}