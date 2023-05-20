#include<iostream>
using namespace std;
void Rectangle(int length ,int breadth)
{
    if(length==breadth)
    {
        cout<<"Its a Square give distinct dimensions"<<endl;
        return;
    }
    for(int i=1;i<=length;i++)
    {
        for(int j=1;j<=breadth;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main()
{
    int len,bre;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>len;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>bre;
    Rectangle(len,bre);
}