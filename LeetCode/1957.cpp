/*
---------------------------------------------------------------
    Daily Question - 07/21/2025
    1957. Delete Characters to Make Fancy String
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string prev = "";
        string ans = "";
        for (char c : s) {
            if (c != prev[0]) {
                ans += c;
                prev = c;
            } else if (prev.size() < 2) {
                ans.push_back(c);
                prev.push_back(c);
            }
        }
        return ans;
    }
};