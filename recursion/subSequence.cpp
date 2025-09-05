
#include <bits/stdc++.h>
using namespace std;


void solve(string t, string output, int index,
           vector<string> &ans)
{
    if (index >= t.length())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(t, output, index + 1, ans);

    // include
    output.push_back(t[index]);
    solve(t, output, index + 1, ans);
}

bool isSubsequence(string s, string t)
{
    vector<string> ans;
    string output = "";
    int index = 0;

    solve(t, output, index, ans);

    for (string st : ans)
    {
        if (st == s)
            return true;
    }
    return false;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << isSubsequence(s, t);
}