// Given an integer n, print all the divisors of N in the ascending order.
 
// Examples:

// Input : n = 20
// Output: 1 2 4 5 10 20
// Explanation: 20 is completely divisible by 1, 2, 4, 5, 10 and 20.
// Input: n = 21191
// Output: 1 21191
// Explanation: As 21191 is a prime number, it has only 2 factors(1 and the number itself).
// Constraints:
// 1 ≤ n ≤ 109

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void print_divisors(int n) {
        vector<int> divisors;

        // Step 1: find divisors
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {  // avoid duplicate for perfect squares
                    divisors.push_back(n / i);
                }
            }
        }

        // Step 2: sort for ascending order
        sort(divisors.begin(), divisors.end());

        // Step 3: print
        for (int d : divisors) {
            cout << d << " ";
        }
        cout << endl;
    }
};
