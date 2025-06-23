// 1672. Richest Customer Wealth
#include <bits/stdc++.h>
using namespace std;

int maxSumFn(vector<vector<int>> &accounts)
{
    int maxsum = 0;
    for (auto account : accounts)
    {
        int sum = 0;
        for (auto a : account)
        {
            sum += a;
        }
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> accounts(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> accounts[i][j];
        }
    }

    int maxSum = maxSumFn(accounts);
    cout<<maxSum<<endl;
}