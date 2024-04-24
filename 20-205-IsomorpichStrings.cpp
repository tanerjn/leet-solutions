class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, char> char_map;
    std::unordered_set<char> mapped_chars;

    for (int i = 0; i < s.length(); ++i) {
        char char_s = s[i];
        char char_t = t[i];

        if (char_map.find(char_s) != char_map.end()) {
            if (char_map[char_s] != char_t) {
                return false;
            }
        } else {
            if (mapped_chars.find(char_t) != mapped_chars.end()) {
                return false;
            }
            char_map[char_s] = char_t;
            mapped_chars.insert(char_t);
        }
    }

    return true;
    }
};
