#include <iostream>
using namespace std;
// Brute Force Approach (O(n^2))
void Subarray_With_Given_Sum(int arr[], int n, int sum)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp += arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (sum == temp)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
            else
            {
                temp += arr[j];
                if (sum == temp)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
        }
        temp = 0;
    }
    cout << "No subarray found" << endl;
    return;
}
void Subarray_With_Given_Sum_Optimized(int arr[], int n, int sum)
{
    int First_Pointer = 0;
    int Second_Pointer = 0;
    int Current_Sum = 0;
    while (Second_Pointer<n && Current_Sum<sum)
    {
        Current_Sum+=arr[Second_Pointer];
        Second_Pointer++;
    }
    if(Current_Sum==sum)
    {
        cout<<First_Pointer+1<<" "<<Second_Pointer+1<<endl;
        return;
    }
    
    cout << "Not Found" << endl;
    return;
}
int main()
{
    int n, s;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Sum " << endl;
    cin >> s;
    //Subarray_With_Given_Sum(arr, n, s);
    Subarray_With_Given_Sum_Optimized(arr,n,s);
}