/*
---------------------------------------------------------------
    Daily Question - 08/05/2025
    3477. Fruits Into Baskets II
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        int n = fruits.size();

        for (int i = 0; i<n; i++) {
            for (int j = 0; j<n; j++) {
                if (baskets[j] >= fruits[i]) {
                    baskets[j] = 0;
                    break;
                }
                if (j == n-1) ans++;
            }
        }

        return ans;
    }
};