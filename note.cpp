
// 1. for pattern related node

{
    // 1 2 3 4 5 -- -- -- >  i = (n - i)
    // 0 2 4 8 -----> 2*i = 2*n -(2*i)
    // 1 3 5 7 9 -- -- -- >  2 *i + 1 = 2 * n - (2 * i + 1)
    // 2 *n = 2 * n - 1
    // 6 4 2 0 ----> first = 2(n-1)   first =-2;

    // flip :
    // start =1;
    // start = 1- start

    // char :  A B C D E ...Z
    // 'A'+1 ='A';
    // 'A'+2 ='B';
    // 'A'+3 ='C'
    // 'A'+i = 'z'  // loop finish after 'z'
    // 'A'+i = 'A' + (n-i)  : A B C D E F

    {
        // vector :
        
        // sort ( v.begin(), v.end() );
        // int Sz = unique ( v.begin(), v.end() ) - v.begin();  // 3
        // for ( int i = 0; i < sz; i++ ) cout << a[i] << " "; /// 1 2 3

        // max_element( a.begin(), a.end() ) - a.begin()  // return index;
        // *max_element( a.begin(), a.end() )  // return value ;
    }

    {
        // vector of pair :

        // bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
        // {
        //     if (p1.first > p2.first)
        //         return 1;   
        //     if (p1.first == p2.first)
        //         return (p1.second < p2.second);
        //     return 0;
        // }

        // int main()
        // {
        //     int x, y;
        //     int n;
        //     cin >> n;
        //     vector<pair<int, int>> v;
        //     for (int i = 0; i < n; i++)
        //     {
        //         cin >> x >> y;
        //         v.push_back({x, y});
        //     }
        // }
        //sort ( v.begin(), v.end(), cmp ); 
    }

}