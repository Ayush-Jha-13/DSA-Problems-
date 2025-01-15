// Given two positive integers num1 and num2, find the positive integer x such that:

// x has the same number of set bits as num2, and
// The value x XOR num1 is minimal.
// Note that XOR is the bitwise XOR operation.

// Return the integer x. The test cases are generated such that x is uniquely determined.

// The number of set bits of an integer is the number of 1's in its binary representation.

 

// Example 1:

// Input: num1 = 3, num2 = 5
// Output: 3
// Explanation:
// The binary representations of num1 and num2 are 0011 and 0101, respectively.
// The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setBits = __builtin_popcount(num2);
        int res = 0;
        int bit = 31;

        while(bit >= 0 && setBits > 0){
            if((num1 & (1 << bit)) != 0){
                res |= (1 << bit);
                setBits--;
            }
            bit--;
        }

        bit = 0;
        while(setBits > 0 && bit <= 31){
            if((num1 & (1 << bit)) == 0){
                res |= (1 << bit);
                setBits--;
            }
            bit++;
        }

        return res;
    }
};