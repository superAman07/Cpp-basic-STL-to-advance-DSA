#include<iostream>
using namespace std;
int SubsetSumProblem(int arr[],int n,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int j=1;j<=sum;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<arr[i-1])dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
        }
    }
    return dp[n][sum];
}
int main(){
    int n=3;
    int arr[n]={2,5,3};
    int sum=5;
    cout<<SubsetSumProblem(arr,n,sum)<<endl;
    return 0;
}
