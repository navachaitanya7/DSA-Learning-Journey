// Given two numbers as strings s1 and s2. Calculate their Product.
// Note: The numbers can be negative and You are not allowed to use any built-in function or convert the strings to integers. There can be zeros in the begining of the numbers. You don't need to specify '+' sign in the begining of positive numbers.

// Examples:

// Input: s1 = "0033", s2 = "2"
// Output: "66"
// Explanation: 33 * 2 = 66
// Input: s1 = "11", s2 = "23"
// Output: "253"
// Explanation: 11 * 23  = 253
// Input: s1 = "123", s2 = "0"
// Output: "0"
// Explanation: Anything multiplied by 0 is equal to 0.
// Constraints:
// 1 ≤ s1.size() ≤ 103
// 1 ≤ s2.size() ≤ 103

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {
        // Step 1: Handle negative signs
        bool isNegative = false;
        if (s1[0] == '-') {
            isNegative = !isNegative;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            isNegative = !isNegative;
            s2 = s2.substr(1);
        }

        // Step 2: Remove leading zeros
        while (s1.size() > 1 && s1[0] == '0') s1.erase(s1.begin());
        while (s2.size() > 1 && s2[0] == '0') s2.erase(s2.begin());

        // Step 3: Quick check for zero
        if (s1 == "0" || s2 == "0") return "0";

        int n = s1.size(), m = s2.size();
        vector<int> result(n + m, 0);

        // Step 4: Multiply digits like school method
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Step 5: Convert array to string
        string ans = "";
        int i = 0;
        while (i < result.size() && result[i] == 0) i++; // skip leading zeros
        for (; i < result.size(); i++) ans.push_back(result[i] + '0');

        // Step 6: Add sign if negative
        if (isNegative) ans = "-" + ans;

        return ans;
    }
};
