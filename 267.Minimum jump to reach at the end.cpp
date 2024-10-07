#include<iostream>
using namespace std;
//Recursive solution 
// int MinimumJump(int arr[],int n){
//     if(n==1)return 0;
//     int res =INT_MAX;
//     for(int i=0;i<n-1;i++){
//         if(i+arr[i]>=n-1){
//             int sub_res = MinimumJump(arr,i+1);
//             if(sub_res!=INT_MAX){
//                 res=min(sub_res+1,res);
//             }
//         }
//     }
//     return res;
// }

//using DP
int MinimumJump(int arr[],int n){
    int res=INT_MAX;
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]+j>=i){
                if(dp[j]!=INT_MAX){
                    dp[i]=min(dp[i],dp[j]+1);
                }
            }
        }
    }
    return dp[n-1];
}
int main(){
    int arr[]{3,4,2,1,2,1};
    int n=6;
    cout<<MinimumJump(arr,n);
    return 0;   
}
