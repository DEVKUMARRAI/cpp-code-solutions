#include<iostream>
using namespace std;
//Brute Force Approach
void Maximum_Sum_Subarray(int arr[],int n)
{
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum>max_sum)
            {
                max_sum=sum;
            }
        }
    }
    cout<<max_sum<<endl;
}
void Kadanes_Optimized_Approach(int arr[],int n)
{
    int max_sum=INT_MIN;
    int Current_Sum=0;
    int Pointer=0;
    while(Pointer<n)
    {
        Current_Sum+=arr[Pointer];
        if(Current_Sum<0)
        {
            Current_Sum=0;
        }
        if(Current_Sum>max_sum)
        {
            max_sum=Current_Sum;
        }
        Pointer++;
    }
    cout<<max_sum<<endl;
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
    //Maximum_Sum_Subarray(arr,n);
    Kadanes_Optimized_Approach(arr,n);
}