class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
    std::vector<int> dp(n + 1);

    // Fill the dp array with the minimum cost to reach each step
    for (int i = 2; i <= n; ++i) {
        dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }

    // Return the minimum cost to reach the top floor
    return dp[n];
    }
};
