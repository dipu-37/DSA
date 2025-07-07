#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, part;
    cin >> s >> part;
    int windowL = part.size();
    cout << windowL << endl;

    while (s.find(part)<s.size())
    {
        s.erase(s.find(part), windowL);
    }

    cout << s << endl;
}