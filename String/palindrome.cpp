#include <bits/stdc++.h>
using namespace std;

bool isAlphaNumNumber(char ch)
{
    if (ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}
int main()
{
    string str;
    getline(cin, str);

    int start = 0, end = str.size() - 1;
    bool flag = true;
    while (start < end)
    {
        if (!isAlphaNumNumber(str[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNumNumber(str[end]))
        {
            end--;
            continue;
        }

        if (tolower(str[start]) != tolower(str[end]))
        {
            flag = false;
        }
        start++;
        end--;
    }
    if (flag)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}