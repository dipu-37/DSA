#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else {
            if (!st.empty()) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

void generateParenTheses(int n, string s, vector<string>& ans) {
    if (s.size() == n * 2) {
        if (isValid(s)) {
            ans.push_back(s);
        }
        return; 
    }

    generateParenTheses(n, s + '(', ans);
    generateParenTheses(n, s + ')', ans);
}

int main() {
    int n;
    cin >> n;
    vector<string> ans;
    string s;

    generateParenTheses(n,s, ans);

    for (string s : ans) {
        cout << s << " ";
    }
}
