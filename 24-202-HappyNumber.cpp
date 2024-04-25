class Solution {
public:
    bool isHappy(int n) {
        auto get_next = [](int num) {
        int total_sum = 0;
        while (num > 0) {
            int digit = num % 10;
            total_sum += digit * digit;
            num /= 10;
        }
        return total_sum;
    };

    std::unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = get_next(n);
    }
    return n == 1;
    }
};
