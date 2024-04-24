class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       std::unordered_map<char, int> char_count;

    // Count occurrences of each character in magazine
    for (char ch : magazine) {
        char_count[ch]++;
    }

    // Check if characters in ransomNote can be constructed from magazine
    for (char ch : ransomNote) {
        if (char_count.find(ch) != char_count.end() && char_count[ch] > 0) {
            char_count[ch]--;
        } else {
            return false;
        }
    }
    return true;
    }
};
