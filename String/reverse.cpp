#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int low = 0;
    int high = s.size()-1;
    while (low < high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
    cout << s;
}