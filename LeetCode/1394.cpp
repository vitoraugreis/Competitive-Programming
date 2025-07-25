/*
---------------------------------------------------------------
    Daily Question - 07/05/2025
    1394. Find Lucky Integer in an Array
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> m;
        int ans = 0;

        for (int n : arr) {
            if (m.count(n)) m[n]++;
            else m[n] = 1;
        }

        for (const auto& [k, v] : m) {
            if (k == v && k > ans)
                ans = k;
        }

        return (ans == 0) ? -1 : ans;
    }
};