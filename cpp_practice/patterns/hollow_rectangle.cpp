#include<iostream>
using namespace std;
void Hollow_Rectangle(int Rows,int Collumns)
{
    for(int i=1;i<=Rows;i++)
    {
        if (i==1 || i==Rows)
        {
            for(int j=1;j<=Collumns;j++)
            {
                cout<<" * ";
            }
        }
        else
        {
            cout<<" * ";
            for(int j=2;j<=Collumns-1;j++)
            {
                cout<<"   ";
            }
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main()
{
    int rows,collumns;
    cout<<"Enter rows"<<endl;
    cin>>rows;
    cout<<"Enter collumns"<<endl;
    cin>>collumns;
    Hollow_Rectangle(rows,collumns);
}