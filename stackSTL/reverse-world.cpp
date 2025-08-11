#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stack<char> st;
    // reverse(str.begin(),str.end());
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            st.push(str[i]);
        }
        else
        {
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            ans += " ";
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    ans += " ";

    cout << ans << endl;

   
}