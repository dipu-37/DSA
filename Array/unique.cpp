#include<bits/stdc++.h>
using namespace std;
int track[10^6];
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i=0;i<n;i++){
        if(track[arr[i]]==false){
            cout<<arr[i]<<" ";
            track[arr[i]]=true;
        }
    }
   
}