#include <bits/stdc++.h>
using namespace std;
int main()
{

    // code write here
    int n;
    cin >> n;

    for (int i = 0; i < 2*n; i++)
    {
        int start =i;
        if(i>n) start= 2 * n -i;
        for (int j = 0; j < start; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

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