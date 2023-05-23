#include<iostream>
using namespace std;
void Linear_Search(int arr[],int number,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==number)
        {
            cout<<"Found"<<endl;
            return;
        }
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
    Linear_Search(Numbers,num,n);
}