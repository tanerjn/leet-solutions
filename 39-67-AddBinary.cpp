class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size(), n = b.size();
        int carry = 0;
        string result = "";

        // Start from the end of both strings
        int i = m - 1, j = n - 1;
        
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            if (i >= 0) {
                sum += (a[i--] - '0');
            }
            if (j >= 0) {
                sum += (b[j--] - '0');
            }
            result.push_back('0' + sum % 2);
            carry = sum / 2;
        }

        // Reverse the result string
        reverse(result.begin(), result.end());

        return result;
    }
};

