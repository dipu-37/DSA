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

    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }

    // int low=0; int high=n-1;
    // while(low<high){
    //     swap(arr[low],arr[high]);
    //     low++;
    //     high--;
    // } 

    // for(int i=0,j=n-1;i<j;i++,j--)
    // {
    //     cout<<i<<" "<<j<<endl;
    // }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

// last index remove / delete --- tc o(1) , othercase o(n)
// space complexity o(1)

// 5
// 1 2 3 4 5


// 1 2 4 5 