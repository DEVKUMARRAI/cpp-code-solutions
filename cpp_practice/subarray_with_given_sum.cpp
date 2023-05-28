#include <iostream>
using namespace std;

// Brute Force Approach (O(n^2))
void Subarray_With_Given_Sum(int arr[], int n, int sum)
{
    int s;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == sum)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

void Subarray_With_Given_Sum_Optimized(int arr[], int n, int sum)
{
    int First_Pointer = 0;
    int Second_Pointer = 0;
    int Current_Sum = 0;

    while (arr[Second_Pointer] > sum)
    {
        First_Pointer++;
        Second_Pointer++;
    }

    while ((Current_Sum += arr[Second_Pointer]) < sum)
    {
        Second_Pointer++;
    }

    if (Current_Sum == sum)
    {
        cout << First_Pointer + 1 << " " << Second_Pointer + 1 << endl;
        return;
    }
    else
    {
        while (Current_Sum > sum)
        {
            Current_Sum -= arr[First_Pointer];
            First_Pointer++;
        }
        if (Current_Sum == sum)
        {
            cout << First_Pointer + 1 << " " << Second_Pointer + 1 << endl;
            return;
        }
    }

    cout << "Not Found" << endl;
    return;
}

int main()
{
    int n, s;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int* arr = new int[n]; // Using dynamic memory allocation
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Sum: " << endl;
    cin >> s;
    // Subarray_With_Given_Sum(arr, n, s);
    Subarray_With_Given_Sum_Optimized(arr, n, s);
    delete[] arr; // Deallocating the dynamic array
    return 0;
}
