#include<iostream>
#include<climits>
using namespace std;
//Recursion
// int MinNoTrial(int e, int f) {
//     if(f==1||f==0){
//         return f;
//     }
//     if(e==1){
//         return f;
//     }
//     int minTrials = INT_MAX;
//     for (int x = 1; x <= f; x++) {
//         int res = max(MinNoTrial(e - 1, x - 1),MinNoTrial(e, f - x));    
//         minTrials = min(minTrials, res + 1);
//     }
//     return minTrials;
// }
//using DP
int MinNoTrial(int e, int f){
    int dp[f+1][e+1];
    for(int i=1;i<=e;i++){
        dp[0][i] = 0;
        dp[1][i]=1;
    }
    for(int i=1;i<=f;i++){
        dp[i][1] = i;
    }
    for(int i=2;i<=f;i++){
        for(int j=2;j<=e;j++){
            dp[i][j] = INT_MAX;
            for(int x=1;x<=i;x++){
                dp[i][j] = min(dp[i][j],max(dp[i-x][j],dp[x-1][j-1])+1);
            }
        }
    }
    return dp[f][e];
}

int main() {
    int e = 2;  
    int f = 10; 
    cout << "Minimum number of trials needed: " << MinNoTrial(e, f) << endl;
    return 0;
}
