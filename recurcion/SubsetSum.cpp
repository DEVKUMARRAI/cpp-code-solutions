#include<vector>
#include<iostream>
using namespace std;
void Subset_Sum(vector<int> &arr, int size, vector<int> &result, int sum, int index)
{
    if (index == size)
    {
        result.push_back(sum);
        return;
    }
    sum = sum + arr[index];
    Subset_Sum(arr, size, result, sum, index + 1);
    sum = sum - arr[index];
    Subset_Sum(arr, size, result, sum, index + 1);
}
int main()
{
    int n;
    int k;
    cin >> n;
    vector<int> arr;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {

        cin >> k;
        arr.push_back(k);
    }
    Subset_Sum(arr, n, result, 0, 0);
    sort(result.begin(), result.end());
    for (auto x : result)
    {
        cout << x << " ";
    }
}