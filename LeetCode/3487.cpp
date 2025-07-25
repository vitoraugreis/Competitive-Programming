/*
---------------------------------------------------------------
    Daily Question - 07/25/2025
    3487. Maximum Unique Subarray Sum After Deletion
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        int maiorNeg = INT_MIN;
        int sumPos = 0;

        for (int n : nums) {
            if (n <= 0) 
                maiorNeg = (n > maiorNeg) ? n : maiorNeg;
            else if (s.count(n)) 
                continue;
            else {
                sumPos += n;
                s.insert(n);
                cout << sumPos;
            }
        }

        return (sumPos == 0) ? maiorNeg : sumPos;
    }
};