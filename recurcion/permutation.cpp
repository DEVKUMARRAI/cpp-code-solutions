#include <iostream>
#include <vector>
using namespace std;
void permu(int arr[], vector<int> &ds, vector<vector<int> > &ans, int check[])
{
    if (ds.size() == 3)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < 3; i++)
    {

        if (!check[i])
        {
            ds.push_back(arr[i]);
            check[i] = 1;
            permu(arr, ds, ans, check);
            check[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    int check[3] = {0, 0, 0};
    vector<int> ds;
    vector<vector<int> > ans;
    permu(arr, ds, ans, check);
    int rows = ans.size();
    int cols = ans[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Print the value at the current row and column
            std::cout << ans[i][j] << " ";
        }
        // Print a newline character to move to the next row
        std::cout << std::endl;
    }
}