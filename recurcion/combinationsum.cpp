#include <iostream>
#include <vector>
using namespace std;
void Find_Combination_Sum(int index, int target, vector<vector<int>> &answer, vector<int> &ds, vector<int> &elements)
{
    if (index == elements.size())
    {
        if (target == 0)
        {
            answer.push_back(ds);
        }
        return;
    }
    if (elements[index] <= target)
    {
        ds.push_back(elements[index]);
        Find_Combination_Sum(index, target - elements[index], answer, ds, elements);
        ds.pop_back();
    }
    Find_Combination_Sum(index + 1, target, answer, ds, elements);
}
int main()
{
    int target;
    cout << "Enter the Target value" << endl;
    cin >> target;
    vector<int> ds;
    vector<vector<int>> answer;
    vector<int> elements;
    int n;
    cout << "How Many Number Of Elements You Want in Your Array?" << endl;
    cin >> n;
    while (n >= 1)
    {
        int e;
        cin >> e;
        elements.push_back(e);
        n--;
    }
    Find_Combination_Sum(0, target, answer, ds, elements);
    cout<<endl<<"--------So The Combinations are-----------"<<endl;

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
}