
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // int brr[m][n];
    // int k = n - 1;
    // int l = 0;

    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         brr[i][l] = arr[i][k];
    //     }
    //     k--;
    //     l++;
    // }

    // int brr[m][n];

    // for (int i = 0; i < m; i++)
    // {
    //     int k = n - 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         brr[i][j] = arr[i][k];
    //         k--;
    //     }
    // }

    for (int i = 0; i < m; i++)
    {
        int x = 0, y = n - 1;
        while (x < y)
        {
            swap(arr[i][x], arr[i][y]);
            x++;
            y--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
