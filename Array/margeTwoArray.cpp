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

    int k=0;
    for (int i = 0; i < n; i++)
    {
        // marge[k++]=arr[i];
        marge[k]=arr[i];
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        // marge[k++]=brr[i];
        marge[k]=brr[i];
        k++;
    }
    
    for (int i = 0; i <n+m; i++)
    {
        cout<<marge[i]<<" ";
    }
}

// 3 7
// 1 3 5
// 2 3 5 6 8 9 10

// 1 3 5 2 3 5 6 8 9 10 