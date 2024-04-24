class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return ""; // If the array is empty, return an empty string

    std::string prefix = strs[0]; // Start with the first string as the initial prefix

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j); // Update the prefix to the common prefix found so far
        if (prefix.empty()) break; // If prefix becomes empty, there's no common prefix
    }

    return prefix;
    }
};
