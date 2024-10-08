#include<iostream>
using namespace std;
// Recusrive solution 1
// int sol(int arr[],int i,int j,int sum){
//     if(j==i+1)return max(arr[i],arr[j]);
//     return max(sum-sol(arr,i+1,j,sum-arr[i]),sum-sol(arr,i,j-1,sum-arr[j]));
// }
// int mainSol(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++)sum+=arr[i];
//     return sol(arr,0,n-1,sum);
// }

// 2nd recursive solution
// int sol(int arr[],int i,int j){
//     if(i+1==j)return max(arr[i],arr[j]);
//     return max(arr[i]+(min(sol(arr,i+2,j),sol(arr,i+1,j-1))),arr[j]+(min(sol(arr,i+1,j-1),sol(arr,i,j-2))));
// }

//3rd using DP
int sol(int arr[],int n){
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i+1]=max(arr[i],arr[i+1]);
    }
    for(int gap=3;gap<n;gap+=2){
        for(int i=0;i<n-gap;i++){
            int j=i+gap;
            dp[i][j]=max(arr[i]+min(dp[i+2][j],dp[i+1][j-1]),arr[j]+min(dp[i+1][j-1],dp[i][j-2]));
        }
    }
    return dp[0][n-1];
}

int main(){
    int arr[]{20,5,4,6};
    int n=4;
    // cout<<mainSol(arr,n);
    // cout<<sol(arr,0,n-1);
    cout<<sol(arr,n);
    return 0;
}
