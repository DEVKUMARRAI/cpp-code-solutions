#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag=true;
    cin>>n;
    char arr[n];
    cin>>arr;
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            flag=false;
            break;
        }
        start++;
        end--;
    }
    if(flag)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }

}