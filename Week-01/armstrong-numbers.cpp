// You are given a 3-digit number n, Find whether it is an Armstrong number or not.

// An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

// Examples:

// Input: n = 153
// Output: true
// Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 
// Input: n = 372
// Output: false
// Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 
// Input: n = 100
// Output: false
// Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1. 
// Constraints:
// 100 ≤ n <1000 

class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;   // extract last digit
            sum += digit * digit * digit; // cube it
            n /= 10;              // remove last digit
        }

        return sum == original;
    }
};
