#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = -1,second=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second = max;
            max=arr[i];
        }else if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
    }
    cout<<second<<endl;
   
    return 0;
}