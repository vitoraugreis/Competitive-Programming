/*
---------------------------------------------------------------
    Daily Question - 01/12/2026
    1266. Minimum Time Visiting All Points
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for (int i = 0; i<n-1; i++) {
                int hor = abs(points[i][0] - points[i+1][0]);
                int vert = abs(points[i][1] - points[i+1][1]);
                ans += (hor < vert) ? vert : hor;
        }

        return ans;
    }
};