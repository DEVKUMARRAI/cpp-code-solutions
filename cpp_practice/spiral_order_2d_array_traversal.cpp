#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int collumn_start=0,collumn_end=m-1,row_start=0,row_end=n-1;
    while(row_start<=row_end && collumn_start<=collumn_end)
    {
        //for row start 
        
        for(int col=collumn_start;col<=collumn_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        
        //for collumn end

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][collumn_end]<<" ";
        }
        collumn_end--;

        //for row end

        for(int col=collumn_end;col>=collumn_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for collumn start

        for(int col=row_end;col>=row_start;col--)
        {
            cout<<arr[col][collumn_start]<<" ";
        }
        collumn_start++;
    }

}