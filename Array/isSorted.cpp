#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            ans = false;
            break;
        }
    }
    cout << ans << endl;
}