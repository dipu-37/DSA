#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char ch : s)
    {
        st.push(ch);
    }

    string res;
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res;
}