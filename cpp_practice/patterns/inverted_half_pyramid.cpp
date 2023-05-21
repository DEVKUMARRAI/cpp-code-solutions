#include <iostream>
using namespace std;
void IHP(int n)
{
    int s = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << "* ";
        }
        s--;
        cout << endl;
    }
}
int main()
{
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    IHP(size);
}