#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, p;
    cin >> m >>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cin>>n>>p;
    int brr[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> brr[i][j];
        }
    }

    int mul[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;  // mul[i][j] =0;
            for (int k = 0; k < n; k++)
            {
                sum += arr[i][k] * brr[k][j];  // mul[i][j] += 
            }
            mul[i][j] = sum;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}


/*
2 3
1 2 3
2 3 1


3 4
1 2 3 4
0 1 2 3
1 2 1 0

output -->
4 10 10 10 
3 9 13 17 
*/