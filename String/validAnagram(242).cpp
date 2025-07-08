#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1>>s2;
    if(s1.size()!=s2.size()) return false;
    int frq[26]={0};
    for(int i=0;i<s1.size();i++)
    {
       frq[s1[i]-'a']++;
       frq[s2[i]-'a']--;

    }
    // int frq1[26] = {0};
    // int frq2[26] = {0};
    // for (int i = 0; i <s1.size(); i++)
    // {
    //     int ind = s1[i] - 'a';
    //     frq1[ind]++;
    // }
    // for (int i = 0; i <s2.size(); i++)
    // {
    //     int ind = s2[i] - 'a';
    //     frq2[ind]++;
    // }
    // int flag = 1;
    // for(int i=0;i<26;i++){
    //     if(frq1[i]!=frq2[i]){
    //         flag = 0;
    //     }
    // }
    // if(flag){
    //     cout<<"valid anagram";
    // }else{
    //     cout<<"not valid anagram";
    // }
}