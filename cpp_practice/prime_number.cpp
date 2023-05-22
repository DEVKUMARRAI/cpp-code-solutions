#include<iostream>
using namespace std;
void Check_Prime(int number)
{
    for(int i=2;i<=number-1;i++)
    {
        if(number%i==0)
        {
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        else{
            cout<<"Prime Number"<<endl;
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the Number to Check"<<endl;
    cin>>n;
    Check_Prime(n);
}