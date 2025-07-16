/*
---------------------------------------------------------------
    Daily Question - 07/16/2025
    3201. Find the Maximum Length of Valid Subsequence I
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even = 0;
        int odd = 0;
        int alt = 1;
        bool altOdd = (nums[0] % 2) ? true : false;

        for (int i : nums) {
            if (i % 2) {
                odd++;
                if (!altOdd) {
                    alt++; 
                    altOdd = true;
                }
            } else {
                even++;
                if (altOdd) {
                    alt++; 
                    altOdd = false;
                }
            }
        }
        
        return max(odd, max(even, alt));
    }
};