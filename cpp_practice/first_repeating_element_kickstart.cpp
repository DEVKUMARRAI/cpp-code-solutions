#include<iostream>
using namespace std;
void First_Repeating_Element(int arr[],int n)
{
    int res[100];
    int m=INT_MAX;
    for(int i=0;i<100;i++)
    {
        res[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(res[arr[i]]!=-1)
        {
            m=min(m,res[arr[i]]);
        }
        else
        {
            res[arr[i]]=i;
        }
    }
    if(m==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<m+1;
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
    First_Repeating_Element(arr,n);
}