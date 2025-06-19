#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[m];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        cin >> brr[i];
    int marge[n + m];

    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            marge[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            marge[k] = brr[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        marge[k] = arr[i];
        k++;
        i++;
    }
    while (j < m)
    {
        marge[k] = brr[j];
        k++;
        j++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << marge[i] << " ";
    }
}

// 3 7
// 1 3 5
// 2 3 5 6 8 9 10

// 1 2 3 3 5 5 6 8 9 10 