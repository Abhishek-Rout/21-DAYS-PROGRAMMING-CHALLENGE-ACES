#include <iostream>

using namespace std;



class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (k == 0 || prices.size() < 2) return 0;
        if (k > prices.size() / 2) {
            int res = 0;
            for (int i = 1; i < prices.size(); ++i)
                res += max(prices[i] - prices[i - 1], 0);
            return res;
        }
        
        vector<vector<int>> dp(k + 1, vector<int>(prices.size(), 0));
        for (int i = 1; i <= k; i++) {
            int tmpMax =  -prices[0];
            for (int j = 1; j < prices.size(); j++) {
                dp[i][j] = max(dp[i][j - 1], prices[j] + tmpMax);
                tmpMax =  max(tmpMax, dp[i - 1][j - 1] - prices[j]);
            }
        }
    
        return dp[k][prices.size() - 1];
    }
};