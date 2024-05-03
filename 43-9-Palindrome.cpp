class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
    if (x < 0)
        return false;

    long original = x;
    long reverse = 0;

    while (x != 0) {
        long digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    return original == reverse;
    }
};
