#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        // if (i != n - 1 - i)
        // {
        //     sum += arr[i][n - 1 - i]; 
        // }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 - i)
            continue;
        sum += arr[i][n - 1 - i];
    }
    cout << sum << endl;
}