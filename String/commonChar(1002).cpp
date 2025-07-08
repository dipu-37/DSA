#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for (string word : words)
    {
        cout << word << endl;
    }
}