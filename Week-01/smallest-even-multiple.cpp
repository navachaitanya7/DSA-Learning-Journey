// 2413. Smallest Even Multiple
// Question
// Given a positive integer n, determine the smallest positive integer that is a multiple of both 2 and n.

// Example 1:

// Input: n = 6

// Output: 6

// Explanation: The smallest positive integer that is a multiple of both 2 and 6 is 6.

// Example 2:

// Input: n = 5

// Output: 10

// Explanation: The smallest positive integer that is a multiple of both 2 and 5 is 10.

// Constraints:

// 1≤n≤150

class Solution {
public:
    int smallestEvenMultiple(int n) {
        // If n is already an even number, it is the smallest
        // number that is a multiple of both 2 and n.
        if (n % 2 == 0) {
            return n;
        } else {
            // If n is an odd number, the smallest even multiple
            // is n multiplied by 2.
            return n * 2;
        }
    }
};
