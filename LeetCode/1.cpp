/*
---------------------------------------------------------------
    1. Two Sum
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int index = 0;
        for (int num : nums) {
            int check = target - num;
            if (m.count(check))
                return {m[check], index};
            
            m[num] = index;
            index++;
        }
        
        return {0, 0};
    }
};