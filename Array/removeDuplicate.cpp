#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> temp;
    for (int i = 0; i < n - 1; i++)
    {
        // TO DO
        if (arr[i] != arr[i + 1])
        {
            temp.push_back(arr[i]);
        }
    }
    temp.push_back(arr[n - 1]);

    // type - 02
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
        // return i+1;
    }
    int uniqueLength = i + 1;
    for (int i = 0; i < uniqueLength; i++)
        cout << arr[i] << " ";
    return 0;
}