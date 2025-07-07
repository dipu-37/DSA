#include <bits/stdc++.h>
using namespace std;
bool isFrqSame(int frq1[], int frq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (frq1[i] != frq2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int frq1[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        int inx = s1[i] - 'a';
        frq1[inx]++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (frq1[i] > 0)
    //     {
    //         cout << char(i + 'a') << frq1[i] << endl;
    //     }
    // }

    int windowSize = s1.size();
    int frq2[26] = {0};
    for (int i = 0; i < s2.size(); i++)
    {

        // for (int j = 0; j < windowSize; j++)
        // {
        //     cout << i + j << endl;
        //     frq2[s2[i + j] - 'a']++;
        // }

        // int frq2[26] = {0};

        int windowInx = 0;
        int inx = i;
        while (windowInx < windowSize && inx < s2.size())
        {
            frq2[s2[inx] - 'a']++;
            windowInx++;
            inx++;
        }
        if (isFrqSame(frq1, frq2))
        {
            return true;
        }
        memset(frq2, 0, sizeof(frq2));
    }
}