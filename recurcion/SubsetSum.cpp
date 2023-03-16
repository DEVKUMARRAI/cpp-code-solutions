#include <iostream>
#include <vector>
using namespace std;
void Subset_Sum(vector<int>&array,int n,vector<int>&sum,int &s,int index)
{
    if(index==n)
    {
        sum.push_back(s);
        return;
    }
    
    Subset_Sum(array,n,sum,s+=array[index],index+1);
    Subset_Sum(array,n,sum,s,index+1);

}
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> arr;
    vector<int>result;
    
    while (n>0)
    {
        int k;
        cin>>k;
        arr.push_back(k);
        n--;
    }
    Subset_Sum(arr,n,result,sum,0);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
    
}