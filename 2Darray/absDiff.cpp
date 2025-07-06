#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    long long primary = 0 , secondary = 0;
    for (int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }
  
    cout << abs(primary - secondary) << endl;
}