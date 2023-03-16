#include<iostream>
using namespace std;
void test(int var)
{
    var--;
}
int main()
{
    cout<<"Hello World";
    int x=10;
    test(x);
    cout<<x;
}