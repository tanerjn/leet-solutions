class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
        return "";
    }

    // Take the first string as the initial prefix
    std::string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        // Compare each character of the current prefix with the corresponding character of the current string
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        // Update prefix to the common part
        prefix = prefix.substr(0, j);

        // If prefix becomes empty, there's no common prefix, so break
        if (prefix.empty()) {
            break;
        }
    }

    return prefix;
}
};
