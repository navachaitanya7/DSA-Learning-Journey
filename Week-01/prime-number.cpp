// Prime Number

// Given a number n, determine whether it is a prime number or not.
// Note: A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

// Examples :

// Input: n = 7
// Output: true
// Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.

// Input: n = 25
// Output: false
// Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.

// Input: n = 1
// Output: false
// Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.

// Constraints:
// 1 ≤ n ≤ 109

class Solution {
public:
  // Function to check if a number is prime
  bool isPrime(int n) {
    // 1. Handle edge cases
    if (n <= 1) {
      return false;
    }
    if (n <= 3) {
      return true; // 2 and 3 are prime numbers
    }

    // 2. Eliminate multiples of 2 and 3
    if (n % 2 == 0 || n % 3 == 0) {
      return false;
    }

    // 3. The optimized loop for checking divisibility
    // We only need to check numbers of the form 6k ± 1
    // up to the square root of n.
    for (int i = 5; i * i <= n; i = i + 6) {
      // Check for divisibility by i (6k - 1) and (i + 2) (6k + 1)
      if (n % i == 0 || n % (i + 2) == 0) {
        return false;
      }
    }

    // If no divisors were found, the number is prime
    return true;
  }
};
