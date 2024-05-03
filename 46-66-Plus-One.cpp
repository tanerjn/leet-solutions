class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

    // Start from the least significant digit
    for (int i = n - 1; i >= 0; i--) {
        // Increment the current digit
        digits[i]++;
        // If the digit is less than 10, no need to carry over, so return the digits array
        if (digits[i] < 10) {
            return digits;
        }
        // If the digit becomes 10, set it to 0 and continue to the next digit
        digits[i] = 0;
    }

    // If there's still an overflow after processing all digits, insert 1 at the beginning
    digits.insert(digits.begin(), 1);
    
    return digits;
    }
};
