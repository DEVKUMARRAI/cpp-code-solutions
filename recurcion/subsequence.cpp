#include <bits/stdc++.h>
using namespace std;
void Solution(int arr[],int n,int i,vector<int>&result,int sum,int t)
{
    if(i==n)
    {
        if(sum==t)
        {
            for(auto x:result)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }
    result.push_back(arr[i]);
    sum+=arr[i];
    Solution(arr,n,i+1,result,sum,t);
    sum-=arr[i];
    result.pop_back();
    Solution(arr,n,i+1,result,sum,t);
}
int main()
{
   int sum=0,target=100;
   int arr[6]={1,2,1,3,4};
   vector <int> res;
   int size=6,index=0;
   Solution(arr,size,index,res,sum,target);
}