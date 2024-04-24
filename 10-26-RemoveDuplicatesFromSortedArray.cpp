class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()) return 0;

    int uniqueCount = 1; // Initialize unique count to 1 for the first element
    for (int i = 1; i < nums.size(); i++) {
        // If the current element is different from the previous one,
        // update the array with the current element at position uniqueCount
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
    }
};
