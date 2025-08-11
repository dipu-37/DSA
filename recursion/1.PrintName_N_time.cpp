#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(int n)
{
    if (n == 0)
        return;
    cout << "dipu" << endl;
    print(n - 1);
    return;
}
int main()
{
    int n;
    cin >> n;
    print(n);
}