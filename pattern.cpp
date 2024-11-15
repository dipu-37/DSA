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
    int start =1;
    for(int i=0; i<n ; i++){
        if( i%2 ==0) start=1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }

        cout<<endl;
    }
}

int main()
{

    // code write here
    int n;
    cin >> n;

    pattern11(n);
}
