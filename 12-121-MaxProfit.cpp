class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize minPrice to maximum possible value
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = std::min(minPrice, price); // Update the minimum price seen so far
        maxProfit = std::max(maxProfit, price - minPrice); // Update the maximum profit
    }
    return maxProfit;
    }
};
