#include<iostream>
#include<vector>
using namespace std;
int longestDist(string &s){
    int n=s.length(),res=0;
    vector<bool>prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++){
        i=max(prev[s[j]]+1,i);
        int maxEnd=j-i+1;
        res = max(res,maxEnd);
        prev[s[j]]=j;
    }
    return res-1;
}
int main(){
    // string s="abcabdb";//4
    string s="abcadbd";//4
    cout<<longestDist(s);
    return 0;
}
