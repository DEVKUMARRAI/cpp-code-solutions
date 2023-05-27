#include<iostream>
using namespace std;
void Smallest_Positive_Missing_Number(int arr[],int n)
{
    int N=1e6;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }
    int answer=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=1)
        {
            check[arr[i]]=true;
        }
    }
    for(int i=1;i<N;i++)
    {
        if(check[i]==false)
        {
            answer=i;
            break;
        }
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
    Smallest_Positive_Missing_Number(arr,n);
}