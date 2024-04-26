class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int reversed = 0;
        // Iterate through each bit position
        for (int i = 0; i < 32; i++) {
            // Extract the least significant bit of n and shift it to the correct position in reversed
            reversed |= (n & 1) << (31 - i);
            // Shift n to the right by one position to process the next bit
            n >>= 1;
        }
        return reversed;
    }
};
