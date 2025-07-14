/*
---------------------------------------------------------------
    Daily Question - 06/30/2025
    594. Longest Harmonious Subsequence
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
       unordered_map<int, int> freq;
       int ans = 0;

       for (int num : nums) {
            freq[num]++;
       }

       for (const auto& [k, v] : freq) {
            if (freq.count(k+1))
                ans = max(ans, v + freq[k+1]);
       }

       return ans;
    }
};