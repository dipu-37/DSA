#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    if(n==1 || n==0) return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubble(arr,n-1);
}
int main()
{
    int arr[] = {10, 1, 7, 6, 14, 9};
    int n = 6;

    bubble(arr,n);
   
    // for(int i=0;i<n;i++){
    //      bubble(arr, n);
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}