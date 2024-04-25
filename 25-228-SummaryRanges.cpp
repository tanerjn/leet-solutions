class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> ranges;
    if (nums.empty())
        return ranges;

    int start = nums[0];
    int end = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == end + 1) {
            end = nums[i];
        } else {
            if (start == end) {
                ranges.push_back(std::to_string(start));
            } else {
                ranges.push_back(std::to_string(start) + "->" + std::to_string(end));
            }
            start = end = nums[i];
        }
    }

    if (start == end) {
        ranges.push_back(std::to_string(start));
    } else {
        ranges.push_back(std::to_string(start) + "->" + std::to_string(end));
    }

    return ranges;
    }
};
