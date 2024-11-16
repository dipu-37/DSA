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
    // 1           1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
}

void pattern14(int N)

{

    // Outer loop for the number of rows.
    for (int i = 0; i < N; i++)
    {

        // Inner loop will loop for i times and
        // print alphabets from A to A + i.
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        // As soon as the letters for each iteration are printed, we move to the
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
        cout << endl;
    }
}

void pattern16(int N)
{

    // Outer loop for the number of rows.
    for (int i = 0; i < N; i++)
    {

        // Defining character for each row.
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {

            // same char is to be printed i times in that row.
            cout << ch << " ";
        }
        // As soon as the letters for each iteration are printed, we move to the
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
        cout << endl;
    }
}
void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        // char ch = 'A'+i;
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    //      A
    //     ABA
    //    ABCBA
    //   ABCDCBA
    //  ABCDEDCBA
}

void pattern18(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (char ch= ('A'+n-1)-i; ch<=('A'+n-1);ch++)
        {

            cout << ch<< " ";
            
        }

        cout << endl;
    }
//     5
// E 
// D E
// C D E
// B C D E
// A B C D E
}
int main()
{

    // code write here
    int n;
    cin >> n;

    pattern18(n);
}
