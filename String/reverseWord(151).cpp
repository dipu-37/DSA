#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    // cout << s << endl;

    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        // if(s[i]==' ') continue;
        string word = "";
        while (i < s.size() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        // cout << word << endl;
        reverse(word.begin(), word.end());
        // cout << word << endl;
        // if(!ans.empty()) {
        //     ans+=" ";
        // }
        if (word.size() > 0)
        {
            ans += " " + word;
        }
    }
    cout << ans.substr(1) << endl;
}