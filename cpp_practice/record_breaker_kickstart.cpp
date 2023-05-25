#include<iostream>
using namespace std;
void Record_Breaking_Day(int arr[],int n)
{
    int mx=INT_MIN;
    int iterator=1;
    if(arr[iterator-1]>arr[iterator])
    {
        cout<<arr[iterator-1]<<" ";
        mx=arr[iterator-1];
        iterator++;
    }
    else
    {
        if(arr[iterator]==arr[iterator-1])
        {
            mx=arr[iterator];
            iterator++;
        }
        if(arr[iterator]>arr[iterator-1] && arr[iterator]>arr[iterator+1])
        {
            cout<<arr[iterator]<<" ";
            iterator++;
            mx=arr[iterator];
        }
    }
    while(iterator<n)
    {
        if(arr[iterator]>mx && arr[iterator]>arr[iterator+1])
        {
            mx=max(mx,arr[iterator]);
            cout<<mx<<" ";
            
        }
        iterator++;
    }
    // if(arr[iterator+1]>mx)
    // {
    //     cout<<arr[iterator+1]<<" ";
    // }
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
    Record_Breaking_Day(arr,n);
}