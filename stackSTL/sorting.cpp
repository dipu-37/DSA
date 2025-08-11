#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> sorted;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        while (!sorted.empty() && sorted.top() > top )
        {
            st.push(sorted.top());
            sorted.pop();
        }
        sorted.push(top);
    }

    while (!sorted.empty())
    {
        cout<<sorted.top()<<" ";
        sorted.pop();
    }
    
}