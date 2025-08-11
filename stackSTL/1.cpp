#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    stack<int>st;
    while (n--)
    {
        string s; cin>>s;
        if(s=="push"){
            int x;cin>>x;
             st.push(x);
        }else if(s=="top"){
            cout<<st.top()<<endl;
        }else if(s=="pop"){
            st.pop();
        }
    }
    
}

/*
10
push 5
top
push 6
top
push 3
top
pop
top
pop
top


5
6
3
6
5

*/