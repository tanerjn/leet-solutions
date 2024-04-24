class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            int k = 0; // Number of elements in nums which are not equal to val

    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        // If the current element is not equal to val, keep it in its current position
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
    }
};
