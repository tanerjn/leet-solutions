class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char result = letters[0]; // Initialize result to the first character in the array
    for (char letter : letters) {
        if (letter > target) {
            result = letter; // Update result if we find a character greater than target
            break;
        }
    }
    return result;
    }
};
