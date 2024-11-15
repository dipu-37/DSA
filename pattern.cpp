#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int start = i;
        if (i > n)
            start = 2 * n - i;
        for (int j = 0; j < start; j++)
        {
            cout << "*";
        }
        cout << endl;

        // follow this input and output
        // 5

        // *
        // **
        // ***
        // ****
        // *****
        // ****
        // ***
        // **
        // *
    }
}
int main()
{

    // code write here
    int n;
    cin >> n;

    pattern(n);
}
