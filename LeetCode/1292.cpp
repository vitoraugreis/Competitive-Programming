/*
-------------------------------------------------------------------------------------
    Daily Question - 01/19/2026
    1292. Maximum Side Length of a Square with Sum Less than or Equal to Threshold
-------------------------------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> prefix(n, vector<int>(m, 0));
        int maxDimension = min(n,m);
        int dimension = 1;
        int sum;
        int ans = 0;

        while (dimension <= maxDimension) {
            for (int i = 0; i<=n-dimension; i++) {
                for (int j = 0; j<=m-dimension; j++) {
                    sum = prefix[i][j];
                    for (int k = i; k<i+dimension; k++)
                        sum += mat[k][j+dimension-1];
                    for (int k = j; k<j+dimension; k++)
                        sum += mat[i+dimension-1][k];
                    sum -= mat[i+dimension-1][j+dimension-1];
                    prefix[i][j] = sum;
                    if (sum <= threshold) ans = dimension;
                }
            }
            if (ans < dimension) return ans;
            dimension++;
        }
        return ans;
    }
};