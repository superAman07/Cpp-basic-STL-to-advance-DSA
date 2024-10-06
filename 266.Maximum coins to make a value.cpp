//using DP
#include<iostream>
using namespace std;
int getMin(int arr[], int n,int val){
    int dp[val+1];
    dp[0]=0;
    for(int i=1;i<=val;i++)dp[i]=INT_MAX;
    for(int i=1;i<=val;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<=i){
                int sub_res=dp[i-arr[j]];
                if(sub_res!=INT_MAX && sub_res+1<dp[i]){
                    dp[i]=min(dp[i],sub_res+1);
                }
            }
        }
    }
    return dp[val];
}
int main(){ 
    int n=3;
    int coin[n]{25,10,5};
    int val = 30;
    cout<<getMin(coin,n,val);
    return 0;
}
