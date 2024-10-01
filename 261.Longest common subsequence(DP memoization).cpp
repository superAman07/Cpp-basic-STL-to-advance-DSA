#include<iostream>
using namespace std;
int memo[7][7]{-1};
int LongestCommonSubsequence(string s1,string s2,int m,int n){
    if(memo[m][n]!=-1)return memo[m][n];
    if(m==0||n==0)memo[m][n]=0;
    else{
        if(s1[m-1]==s2[n-1]){
            memo[m][n]=1+LongestCommonSubsequence(s1,s2,m-1,n-1);
        }else{
            memo[m][n]=max(LongestCommonSubsequence(s1,s2,m-1,n),LongestCommonSubsequence(s1,s2,m,n-1));
        }
    }
    return memo[m][n];
}
int main(){
    string s1="ABCDGH";
    string s2="AEDFHR";
    int m= s1.length();
    int n= s2.length();
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            memo[i][j]=-1;
        }
    }
    cout<<LongestCommonSubsequence(s1,s2,m,n);
    return 0;
}
