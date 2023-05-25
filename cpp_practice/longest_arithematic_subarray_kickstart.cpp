#include<iostream>
using namespace std;
void Longest_Arithematic_Subarray(int arr[],int n)
{
    int current_difference=2;
    int answer=2;
    int previous_difference=arr[1]-arr[0];
    int iterator=2;
    while(iterator<n)
    {
        if(arr[iterator]-arr[iterator-1]==previous_difference)
        {
            current_difference++;
            answer=max(answer,current_difference);
        }
        else
        {
            current_difference=2;
            previous_difference=arr[iterator]-arr[iterator-1];
        }
        iterator++;
    }
    cout<<answer<<endl;
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
    Longest_Arithematic_Subarray(arr,n);
}