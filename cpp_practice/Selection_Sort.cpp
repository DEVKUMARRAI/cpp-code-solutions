#include<iostream>
using namespace std;
void Selection_Sort_Method(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter Size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Before Sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array After Sorting"<<endl;
    Selection_Sort_Method(arr,n);
}