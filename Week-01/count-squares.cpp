// Given a positive integer n, find the number of perfect squares that are less than n in the sample space of perfect squares. The sample space consists of all perfect squares starting from 1 (i.e., 1, 4, 9, 16, 25, …)

// Examples :

// Input: n = 9
// Output: 2
// Explanation: 1 and 4 are the only Perfect Squares less than 9. So, the Output is 2.

// Input: n = 3
// Output: 1
// Explanation: 1 is the only Perfect Square less than 3. So, the Output is 1.

// Constraints:
// 1 <= n <= 108

class Solution {
  public:
    int countSquares(int n) {
     // number of perfect squares strictly less than n
        return floor(sqrt(n - 1));
    }
};