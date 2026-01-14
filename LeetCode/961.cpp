/*
---------------------------------------------------------------
    Daily Question - 01/02/2026
    961. N-Repeated Element in Size 2N Array
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> s;
        for (int i : nums) {
            if (s.count(i))
                return i;
            s.insert(i);
        }
        return -1;
    }
};