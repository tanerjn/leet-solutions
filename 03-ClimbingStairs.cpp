class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1; // Base cases: 0 steps or 1 step
    
    std::vector<int> dp(n + 1);
    dp[0] = 1; // There is 1 way to climb 0 steps
    dp[1] = 1; // There is 1 way to climb 1 step
    
    for (int i = 2; i <= n; ++i) {
        // The number of ways to reach step i is the sum of ways to reach step (i - 1) and (i - 2)
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    return dp[n];
    }
};
