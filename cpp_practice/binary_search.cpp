#include<iostream>
using namespace std;
void Binary_Search_Using_Reccursion(int arr[],int left,int right,int value)
{
    if(left>right)
    {
        cout<<"Not Found"<<endl;
        return;
    }
    int mid=(left+right)/2;
    if(arr[mid]==value)
    {
        cout<<"found"<<endl;
        return;
    }
    else if(arr[mid]>value)
    {
        Binary_Search_Using_Reccursion(arr,mid+1,right,value);
    }
    else{
         Binary_Search_Using_Reccursion(arr,left,mid-1,value);
    }
}
void Binary_Search_Using_Loop(int arr[],int value,int size)
{
    
    int left=0;
    int right=size-1;
    int mid=(left+right)/2;
    while(left<right)
    {
        if(arr[mid]==value)
        {
            cout<<"Found"<<endl;
            return;
        }
        if(value>arr[mid])
        {
            left=mid;
        }
        if(value<arr[mid])
        {
            right=mid;
        }
        mid=(left+right)/2;
    }
    cout<<"Not Found"<<endl;
}
int main()
{
    int n;
    cout<<"Size of the array"<<endl;
    cin>>n;
    int Numbers[n];
    for(int i=0;i<n;i++)
    {
        cin>>Numbers[i];
    }
    int num;
    cout<<"Enter the num"<<endl;
    cin>>num;
    sort(Numbers,Numbers+n);
    //Binary_Search_Using_Loop(Numbers,num,n);
    //Binary_Search_Using_Reccursion(Numbers,0,n-1,num);

}