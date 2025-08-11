#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int i)
{
    int n = s.size();

    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    return palindrome(s, i + 1);
}
int main()
{
    string s;
    cin >> s;
    bool res = palindrome(s, 0);
    cout << res << endl;
}