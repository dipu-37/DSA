#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (int i = 0; i <s.size(); i++)
    {
        int ind = s[i] - 'a';
        frq[ind]++;
    }
    for (int i = 0; i <s.size(); i++)
    {
       int ind = s[i] - 'a';
        if (frq[ind] == 1)
        {
            cout <<i<<"-->"<<s[i]<<endl;
        }
    }
}