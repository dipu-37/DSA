
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


}