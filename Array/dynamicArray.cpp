#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    int *brr = new int[n * 3];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }

    delete[] arr;
    for (int i = 0; i < n * 3; i++)
    {
        cout << brr[i] << " ";
    }

    

    return 0;
}