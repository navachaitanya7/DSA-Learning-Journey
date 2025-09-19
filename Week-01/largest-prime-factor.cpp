// Given a number n, your task is to find the largest prime factor of n.

// Examples:

// Input: n = 5
// Output: 5
// Explanation: The prime factorization of 5 is just 5. Therefore, the largest prime factor is 5.
// Input: n = 24
// Output: 3
// Explanation: The prime factorization of 24 is 23×3. Among the prime factors (2, 3), the largest is 3.
// Input: n = 13195
// Output: 29
// Explanation: The prime factorization of 13195 is 5×7×13×29. The largest prime factor is 29.
// Constraints:
// 2 <= n <= 109

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
  public:
    int largestPrimeFactor(int n) {
        int largest = -1;

        // Step 1: check for factor 2
        while (n % 2 == 0) {
            largest = 2;
            n /= 2;
        }

        // Step 2: check odd factors
        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                largest = i;
                n /= i;
            }
        }

        // Step 3: if n is still > 2, it's prime
        if (n > 2) {
            largest = n;
        }

        return largest;
    }
};
