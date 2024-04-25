class Solution {
public:
    bool isAnagram(string s, string t) {
        // Step 1: Check if lengths are equal
    if (s.size() != t.size()) {
        return false;
    }
    
    // Step 2: Count character frequencies in both strings
    std::unordered_map<char, int> s_freq, t_freq;
    
    for (char c : s) {
        s_freq[c]++;
    }
    
    for (char c : t) {
        t_freq[c]++;
    }
    
    // Step 3: Compare character frequencies
    return s_freq == t_freq;
        }
};
