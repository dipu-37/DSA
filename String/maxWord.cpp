#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> sentences;
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        sentences.push_back(str);
    }

    // find the total char in a sentence with space
    // int mx = -1;
    // for (string sentence : sentences)
    // {
    //     cout << sentence.size() << endl;
    //     mx = max(mx, (int)sentence.size());
    // }
    // cout << mx;

    // find the total char without space;

    // for (string sentence : sentences)
    // {
    //     int countWithOutSpace = 0;
    //     for (char ch : sentence)
    //     {
    //         if (ch != ' ')
    //         {
    //             countWithOutSpace++;
    //         }
    //     }
    //     cout << countWithOutSpace << endl;
    // }

    // count the word in a sentence
    int maxWord = 0;
    for (string sentence : sentences)
    {
        int totalCharWithoutSpace = 0;
        int word = 0;
        for (char ch : sentence)
        {
            if (ch != ' ')
            {
                totalCharWithoutSpace++;
            }
            else if (ch == ' ')
            {
                word++;
            }
        }
        // cout << totalCharWithoutSpace << endl;
        cout << word + 1 << endl;
        maxWord = max(maxWord, word);
    }
    cout << maxWord + 1 << endl;
}