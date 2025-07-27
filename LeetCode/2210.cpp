/*
---------------------------------------------------------------
    Daily Question - 07/27/2025
    2210. Count Hills and Valleys in an Array
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        int prev = nums[0];
        for (int i = 0; i<nums.size()-1; i++) {
            int n = nums[i];
            int next = nums[i+1];
            if (n == next) continue;
            if (n > prev && n > next || n < prev && n < next) ans++;
            prev = n;
        }
        return ans;
    }
};