#include <iostream>
#include <vector>
using namespace std;
int Partition_Function(vector<int>&arr, int low, int high)
{
    int i = low;
    int pivot = arr[low];
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j>=low+1)
        {
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void Quick_Sort(vector<int>&arr, int low, int high)
{
    if (low < high)
    {
        int partition = Partition_Function(arr, low, high);
        Quick_Sort(arr, low, partition - 1);
        Quick_Sort(arr, partition + 1, high);
    }
   
}
int main()
{
    int n;
    vector<int>arr;
    cin>>n;
    while (cin >> n)
    arr.push_back(n);
    Quick_Sort(arr, 0, arr.size()-1);
     cout << "after quick sorting applied" << endl;
    for (auto x:arr)
    {
        cout<<x<<" ";
    }
    
}