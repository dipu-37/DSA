#include <bits/stdc++.h>
using namespace std;

void pattern10(int n)
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

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
    //     5
    // 1
    // 01
    // 101
    // 0101
    // 10101
}

void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{

    // code write here
    int n;
    cin >> n;

    pattern12(n);
}
