#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int inx =0;
    for (int i = 0; i < s.size(); i++)
    {
        int ch = s[i]; // b
        int cnt = 0;
        while (i < s.size() && ch == s[i])
        {
            cnt++;
            i++;
        }
        i--;
        if(cnt==1){
          s[inx]=ch;
        }else{
            s[inx++]=ch;
            string str = to_string(cnt);
            for(char dig : str){
                s[inx++]=dig;
            }
        }
        cout << i << cnt << endl;
        s.resize(inx);
        return inx;
    }
}