#include<iostream>
using namespace std;
void Sum_Of_Subarrays(int arr[],int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Sum_Of_Subarrays(arr,n);
}