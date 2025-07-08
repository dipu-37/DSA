#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2 = "";
    for (int i = 0; i < s.size(); i++)
    {
        int cnt = 1;
        while (s[i] == s[i + 1] && i + 1 < s.size())
        {
            cnt++;
            i++;
        }

        s2 += s[i];
        if (cnt > 1)
        {
            s2 += to_string(cnt);
        }
        // cout << s[i] << cnt;
    }
    cout << s2 << endl;
    cout << s2.size() << endl;
}