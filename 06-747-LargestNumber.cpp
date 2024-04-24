class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0;
    int maxNum = nums[0];
    int secondMaxNum = -1; // Initialize to -1 to handle cases where all numbers are negative

    // Find the maximum and second maximum elements
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > maxNum) {
            secondMaxNum = maxNum;
            maxNum = nums[i];
            maxIndex = i;
        } else if (nums[i] > secondMaxNum) {
            secondMaxNum = nums[i];
        }
    }

    // Check if the maximum element is at least twice as much as every other number
    if (secondMaxNum * 2 <= maxNum) {
        return maxIndex;
    } else {
        return -1;
    }}
};
