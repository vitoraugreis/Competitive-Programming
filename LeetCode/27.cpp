/*
---------------------------------------------------------------
    27. Remove Element
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int n : nums)
            if (n != val) nums[k++] = n;
            
        return k;
    }
};