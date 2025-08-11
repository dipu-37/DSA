#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.push(x);
    }
    int dle = st.size()/2;
    cout<<dle<<endl;
    stack<int>st2;
    int cnt=0;
    while (cnt < dle)
    {
       st2.push(st.top());
       st.pop();
       cnt++;
    }
    st.pop();
    while (!st2.empty())
    {
       st.push(st2.top());
       st2.pop();
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}