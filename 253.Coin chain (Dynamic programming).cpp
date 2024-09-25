#include <bits/stdc++.h>
using namespace std;

int minCoins(vector<int> &coins, int sum) {
    int n = coins.size();
    vector<int> dp(sum + 1, INT_MAX);  
    dp[0] = 0; 
    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    
    return dp[sum] == INT_MAX ? -1 : dp[sum];  
}

int main() {
    int sum = 11;
    vector<int> coins = {9, 6, 5, 1};
    cout << minCoins(coins, sum) << endl; 
    return 0;
}
