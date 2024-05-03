class Solution {
public:
    int romanToInt(string s) {
         std::unordered_map<char, int> romanToIntMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        // If the current symbol represents a value smaller than the next symbol, subtract it
        if (i + 1 < s.length() && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
            result -= romanToIntMap[s[i]];
        }
        // Otherwise, add its value
        else {
            result += romanToIntMap[s[i]];
        }
    }

    return result;
    }
};
