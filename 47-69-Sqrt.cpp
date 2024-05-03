class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
        return x;
    }

    long left = 1;
    long right = x;

    while (left <= right) {
        long mid = left + (right - left) / 2;
        long long midSquared = mid * mid;

        if (midSquared == x) {
            return mid;
        } else if (midSquared < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // When the loop ends, right is smaller than left, and right * right is the largest number smaller than x,
    // so return right as the integer square root
    return right;
    }
};
