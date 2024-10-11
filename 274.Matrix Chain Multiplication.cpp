#include<iostream>
using namespace std;
// Recursive solution---->
// int mChain(int arr[],int i,int j){
//     if(i+1==j)return 0;
//     int res = INT_MAX;
//     for(int k=i+1;k<j;k++){
//         res = min(res,mChain(arr,i,k)+mChain(arr,k,j)+arr[i]*arr[k]*arr[j]);
//     }
//     return res;
// }
// Using DP in theta of n^3 time and n^2 space
int mChain(int arr[], int n){
    int dp[n][n];
    for(int i=0;i<n-1;i++)dp[i][i+1]=0;
    for(int gap=2;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            int j=i+gap;
            dp[i][j]=INT_MAX;
            for(int k=i+1;k<j;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[j][k]+arr[i]*arr[k]*arr[j]);
            }
        }
    }
    return dp[0][n-1];
}
int main(){
    int arr[]{2,1,3,4};
    int i=0;
    int j=3;
    cout<<mChain(arr,i,j)<<"\n";
    return 0;
}
