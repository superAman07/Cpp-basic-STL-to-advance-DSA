#include<iostream>
#include<unordered_map>
using namespace std;
// int Zero1Knapsack(int value[],int weight[],int W,int n){
//     if(n==0||W==0){
//         return 0;
//     }
//     if(weight[n-1]>=W){
//         return Zero1Knapsack(value,weight,W,n-1);
//     }else{
//         return max(value[n-1]+Zero1Knapsack(value,weight,W-weight[n-1],n-1),Zero1Knapsack(value,weight,W,n-1));
//     }
// }

// using DP 
int Zero1Knapsack(int value[],int weight[],int W,int n){
    int dp[n+1][W+1];
    for(int i=0;i<=W;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(weight[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
        }
    }
    return dp[n][W];
}
int main(){
    int value[]{10,40,30,50};
    int weight[]{5,4,6,3};
    int W=10;
    int n = sizeof(value)/sizeof(value[0]);
    cout<<Zero1Knapsack(value,weight,W,n)<<endl;
    return 0;
}
