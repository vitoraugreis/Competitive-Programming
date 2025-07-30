/*
---------------------------------------------------------------
    3. Longest Substring Without Repeating Characters
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for (int i = 0; i<s.length(); i++) {
            int j = i;
            unordered_set<char> conj;
            while (j <= s.length()-1 && !conj.count(s[j]))
                conj.insert(s[j++]);
            
            if (j-i > ans) ans = j-i;
        }
        return ans;
    }
};