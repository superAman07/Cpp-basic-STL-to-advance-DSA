#include<iostream>
using namespace std;
//using DP in theta(n) time and space both
// int maxSum(int arr[],int n){
//     if(n==1)return arr[0];
//     int dp[n+1];
//     dp[1]=arr[0];
//     dp[2]=max(arr[0],arr[1]);
//     for(int i=3;i<=n;i++){
//         dp[i]=max(dp[i-1],dp[i-2]+arr[i-1]);
//     }
//     return dp[n];
// }
// space optimized solution in theta(n) time and constant space
int maxSum(int arr[],int n){
    if(n==1)return arr[0];
    int prev_prev=arr[0];
    int prev=max(arr[0],arr[1]);
    int res = prev;
    for(int i=3;i<=n;i++){
        res = max(prev,prev_prev+arr[i-1]);
        prev_prev = prev;
        prev=res;
    }
    return res;
}

int main(){
    int arr[]{10,5,15,20};
    int n=4;
    cout<<maxSum(arr,n)<<endl;
    return 0;
}
