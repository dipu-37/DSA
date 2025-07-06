
#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};

bool isValid(int i, int j, int m, int n)
{
    return i >= 0 && i < m && j >= 0 && j < n;
}
int main()
{
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    bool flag = true;
    for (int i = 0; i < 8; i++)
    {
        int ni = x + dx[i];
        int nj = y + dy[i];
        // cout<<ni<<" "<<nj<<endl;
        if (isValid(ni, nj, m, n) && arr[ni][nj] != 'x')
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

// xxx
// xxx
// xx.
// 2 2
// no