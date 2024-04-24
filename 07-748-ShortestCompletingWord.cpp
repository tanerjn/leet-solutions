class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        // Count the frequency of each letter in the licensePlate
    std::unordered_map<char, int> charFreq;
    for (char c : licensePlate) {
        if (isalpha(c)) {
            charFreq[tolower(c)]++;
        }
    }

    std::string shortestWord;
    int shortestLength = INT_MAX;

    // Iterate through each word in the words array
    for (const auto& word : words) {
        std::unordered_map<char, int> wordFreq;

        // Count the frequency of each letter in the current word
        for (char c : word) {
            wordFreq[c]++;
        }

        // Check if the current word contains all the letters from licensePlate
        bool isCompletingWord = true;
        for (auto& pair : charFreq) {
            char letter = pair.first;
            int freq = pair.second;
            if (wordFreq[letter] < freq) {
                isCompletingWord = false;
                break;
            }
        }

        // If the current word is a completing word and its length is shorter than the current shortest word
        if (isCompletingWord && word.length() < shortestLength) {
            shortestWord = word;
            shortestLength = word.length();
        }
    }

    return shortestWord;
    }
};
