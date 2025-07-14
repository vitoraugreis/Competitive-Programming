/*
---------------------------------------------------------------
    Daily Question - 07/01/2025
    3330. Find the Original Typed String I
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char, int> m;
        int ans = 1;

        for (int i = 1; i<word.length(); i++) {
            if (word[i] == word[i-1]) ans++;
        }

        return ans;
    }
};