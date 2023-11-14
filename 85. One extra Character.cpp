#include<bits/stdc++.h>
using namespace std;
// void one_char_extra(string &s1, string &s2){
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     char c;
//     for(int i=0;i<min(s1.size(),s2.size());i++){
//         if(s1[i]==s2[i]){
//             c++;
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     cout<<max(s1[c],s2[c]);
// }
// char one_char_extra(string &s1,string &s2){
//     int count[256]={0};
//     for(auto i:s2){
//         count[i]++;
//     }
//     for(auto i:s1){
//         count[i]--;
//     }
//     for(int i=0;i<256;i++){
//         if(count[i]==1){
//             return (char)i;
//         }
//     }
//     return 0;
// }

char one_extra_char( const string &s1,const string &s2){
    int n=s1.length();
    int res=0;
    for(int i=0;i<n;i++){
        res=res^s1[i]^s2[i];
    }
    res=res^s2[n];
    return (char)res;
}
int main(){
    // string s1="abcegd";
    string s1="aabcbc";
    // string s2="abcegid";
    string s2="aabbccba";
    // one_char_extra(s1,s2);
    // cout<<one_char_extra(s1,s2);
    cout<<one_extra_char(s1,s2);
    return 0;
}