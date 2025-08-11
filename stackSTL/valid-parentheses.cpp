#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    stack<int> st;
    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (st.top() == '(' && ch == ')')
        {
            st.pop();
        }
        else if (st.top() == '{' && ch == '}')
        {
            st.pop();
        }
        else if (st.top() == '[' && ch == ']')
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }

    if(st.empty()){
        cout<<"valid";
    }else{
        cout<<"Invalid";
    }
}