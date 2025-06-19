#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index; cin>>index;
    for(int i=index+1;i<n;i++)
    {
        arr[i-1]=arr[i];
    } 
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

}

// last index remove / delete --- tc o(1) , othercase o(n)
// space complexity o(1)

// 5
// 1 2 3 4 5
// 2

// 1 2 4 5 