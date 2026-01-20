/*
---------------------------------------------------------------
    Daily Question - 01/20/2026
    3314. Construct the Minimum Bitwise Array I
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = 0; i< n; i++) {
            int power = 0;
            int aux = nums[i];
            while (aux > 1) {
                aux /= 2;
                power++;
            }
            aux = pow(2, power);
            if (aux == nums[i]) continue;
            aux--;
            while (aux < nums[i]) {
                if ((aux | (aux+1)) == nums[i]) {
                    ans[i] = aux;
                    break;
                }
                aux++;
            }
        }
        return ans;
    }
};

/* Another Solution

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = 0; i<n; i++) {
            int test = 1;
            while (test < nums[i]) {
                if ((test | (test+1)) == nums[i]) break;
                test++;
            }
            if (test != nums[i]) ans[i] = test;
        }
        return ans;
    }
};

*/