#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> result;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            result.push_back(arr[left]);
            left++;
        }
        else
        {
            result.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        result.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        result.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=result[i-low];
    }
}
void mergesort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 1; i <= n; i++)
    {
        int s;
        cin>>s;
        arr.push_back(s);
    }
    mergesort(arr, 0, n - 1);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}
