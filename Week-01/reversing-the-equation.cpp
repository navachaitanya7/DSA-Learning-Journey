// Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
// It is guaranteed that the given equation is valid, and there are no leading zeros.

// Example 1:

// Input:
// S = "20-3+5*2"
// Output: 2*5+3-20
// Explanation: The equation is reversed with
// numbers remaining the same.
// Example 2:

// Input: 
// S = "5+2*56-2/4"
// Output: 4/2-56*2+5
// Explanation: The equation is reversed with
// numbers remaining the same.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function reverseEqn() which takes the string S representing the equation as input and returns the resultant string representing the equation in reverse.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(|S|).

// Constraints:
// 1<=|S|<=105
// The string contains only the characters '0' - '9', '+', '-', '*', and '/'.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

class Solution {
  public:
    string reverseEqn(string s) {
        vector<string> tokens;
        string num = "";

        // Step 1: Split into tokens (numbers/operators)
        for (char ch : s) {
            if (isdigit(ch)) {
                num += ch;  // build number
            } else {
                if (!num.empty()) {
                    tokens.push_back(num); // push complete number
                    num = "";
                }
                tokens.push_back(string(1, ch)); // push operator
            }
        }
        if (!num.empty()) tokens.push_back(num); // push last number if any

        // Step 2: Reverse the tokens
        reverse(tokens.begin(), tokens.end());

        // Step 3: Join back into string
        string result = "";
        for (string &t : tokens) result += t;

        return result;
    }
};

