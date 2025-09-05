#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        solve(arr, index + 1, ans);
        swap(arr[index], arr[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    int index = 0;
    solve(arr, index, ans);

    for (auto it : ans)
    {
        for (auto v : it)
        {
            cout << v <<" ";
        }
        cout<<endl;
    }
}