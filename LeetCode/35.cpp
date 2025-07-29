/*
---------------------------------------------------------------
    35. Search Insert Position
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l <= r) {
            int middle = (l+r)/2;
            if (nums[middle] == target) return middle;
            if (nums[middle] > target) r = middle-1;
            else l = middle+1;
        }
        return l;
    }
};