#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int sumS = 0;
    int sumT = 0;
    for (char ch : s)
        sumS += ch;
    for (char ch : t)
        sumT += ch;
    return (char)(sumT - sumS);
}