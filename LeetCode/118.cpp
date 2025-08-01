/*
---------------------------------------------------------------
    Daily Question - 08/01/2025
    118. Pascal's Triangle
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows, vector<int>());
        
        for (int i = 0; i<numRows; i++) {
            for (int j = 0; j<=i; j++) {
                if (j==0 || j==i) ans[i].push_back(1);
                else ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
        }

        return ans;
    }
};