#include<iostream>
using namespace std;
bool isPal(string str,int i,int g){
    while(i<g){
        if(str[i]!=str[g-1]){
            return false;
        }else{
            i++;
            g--;
        }
    }
    return true;
}
int palPart(string str){
    int n=str.length();
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    for(int gap=1;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            int j=i+gap;
            if(isPal(str,i,gap))dp[i][j]=0;
            else{
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                }
            }
        }
    }
    return dp[0][n-1];
}
int main(){
    string str="geek";
    cout<<palPart(str)<<endl;
    return 0;
}
