#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    // only one element
    // int prev = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     arr[i - 1] = arr[i];
    // }
    // arr[n - 1] = prev;

    // kth time left rotate
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int newIdx = (n - k + i) % n;
        temp[newIdx] = arr[i];
    }

    // kth time right rotate
    int tempp[n];
    for(int i=0;i<n;i++){
        int newIndx = (n+k+i)%n;
        tempp[newIndx]=arr[i];
    }
    
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    return 0;
}