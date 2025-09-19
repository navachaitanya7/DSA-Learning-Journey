// Create the multiplication table from 1 to 10 for a given number n and return the table as an array.

// Examples:

// Input: n = 9
// Output: 9 18 27 36 45 54 63 72 81 90
// Input: n = 2
// Output: 2 4 6 8 10 12 14 16 18 20
// Constraints: 
// 1 <= N <= 106
#include <iostream>
#include <vector>

class Solution {
  public:
    vector<int> getTable(int n) {
        vector<int> table;
        for (int i = 1; i <= 10; i++) {
            table.push_back(n * i);
        }
        return table;
    }
};
