#include <bits/stdc++.h>
using namespace std;
void swapFn(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    swapFn(arr, i+1, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapFn(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
5
1 3 4 5 2 

2 5 4 3 1 
*/