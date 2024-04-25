class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num_index;

    for (int i = 0; i < nums.size(); ++i) {
        if (num_index.find(nums[i]) != num_index.end() && abs(i - num_index[nums[i]]) <= k) {
            return true;
        }
        num_index[nums[i]] = i;
    }

    return false;
    }
};
