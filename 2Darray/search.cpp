#include<bits/stdc++.h>
using namespace std;

int main() {
    int m , n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x ; cin>>x;
     int flag =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==x){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
         cout<<"will not take number";
    }else{
        cout<<"will take number";
    }
   
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
