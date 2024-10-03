// Without Dynamic Programming...
// #include<iostream>
// using namespace std;
// int eD(string s1,string s2,int m,int n){
//     if(m==0)return n;
//     if(n==0)return m;
//     if(s1[m-1]==s2[n-1])return eD(s1,s2,m-1,n-1);
//     else return 1+ min(min(eD(s1,s2,m-1,n),eD(s1,s2,m,n-1)),eD(s1,s2,m-1,n-1));
// }
// int main(){
//     string s1 ="SATURDAY";
//     string s2 ="SUNDAY";
//     int m=s1.length();
//     int n=s2.length();
//     cout<<eD(s1,s2,m,n);
//     return 0;
// }

// using Dynamic Programming...
#include<iostream>
using namespace std;
int eD(string s1,string s2,int m,int n){ 
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        dp[i][0]=i;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=i;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
    // string s1 ="SATURDAY";
    string s1 ="geek";
    // string s2 ="SUNDAY";
    string s2 ="gesek";
    int m=s1.length();
    int n=s2.length();
    cout<<eD(s1,s2,m,n);
    return 0;
}
