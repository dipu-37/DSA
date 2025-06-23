#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    // cout << sentence << endl;
    int n = sentence.size();
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && sentence[i] != ' ')
        {
            word += sentence[i];
            i++;
        }
        cout << word << endl;
    }
}