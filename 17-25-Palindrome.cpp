class Solution {
public:
    bool isPalindrome(string s) {
        // Convert the string to lowercase and remove non-alphanumeric characters
    std::string clean_s;
    for (char c : s) {
        if (std::isalnum(c)) {
            clean_s += std::tolower(c);
        }
    }

    // Compare the clean string with its reversed version
    int left = 0, right = clean_s.size() - 1;
    while (left < right) {
        if (clean_s[left] != clean_s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
};
