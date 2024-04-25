class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store the indices of elements
    std::unordered_map<int, int> num_indices;
    
    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        // Calculate the complement needed to achieve the target
        int complement = target - nums[i];
        
        // Check if the complement exists in the map
        if (num_indices.find(complement) != num_indices.end()) {
            // If found, return the indices of the two numbers
            return {num_indices[complement], i};
        }
        
        // Store the index of the current number in the map
        num_indices[nums[i]] = i;
    }
    
    // If no solution is found, return an empty vector
    return {};
    }
};
