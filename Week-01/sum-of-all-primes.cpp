// 	Sum of All Primes(Sum of all prime numbers between 1 and n)

//     Given a positive integer n, compute and return the sum of all prime numbers between 1 and n (inclusive).

// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  

// Examples:

// Input: n = 5
// Output: 10
// Explanation: 2, 3 and 5 are prime numbers between 1 and 5(inclusive), and their sum is 2 + 3 + 5 = 10.
// Input: n = 10
// Output: 17
// Explanation: 2, 3, 5 and 7 are prime numbers between 1 and 10(inclusive), and their sum is 2 + 3 + 5 + 7 = 17.
// Constraints:
// 1 <= n <= 105

#include <vector>
using namespace std;

class Solution {
public:
    int prime_Sum(int n) {
        if (n < 2) return 0;

        // Step 1: Sieve of Eratosthenes to find primes up to n
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Sum all primes
        int sum = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) sum += i;
        }

        return sum;
    }
};

