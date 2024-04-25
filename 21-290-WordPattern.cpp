class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::istringstream iss(s);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    if (pattern.size() != words.size()) {
        return false;
    }

    std::unordered_map<char, std::string> pattern_to_word;
    std::unordered_map<std::string, char> word_to_pattern;

    for (int i = 0; i < pattern.size(); ++i) {
        char p = pattern[i];
        std::string w = words[i];
        if (pattern_to_word.find(p) == pattern_to_word.end() && word_to_pattern.find(w) == word_to_pattern.end()) {
            pattern_to_word[p] = w;
            word_to_pattern[w] = p;
        } else {
            if (pattern_to_word[p] != w || word_to_pattern[w] != p) {
                return false;
            }
        }
    }

    return true;
    }
};
