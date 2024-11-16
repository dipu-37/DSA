#include <bits/stdc++.h>
using namespace std;


int main()
{

    // code write here
    int n;
    cin >> n;

    int duplicate = n;
    int sum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
    }
    if (duplicate == sum)
    {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
