/*
---------------------------------------------------------------
    28. Find the Index of the First Occurrence in a String
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = needle.size();
        if (l > haystack.size()) return -1;
        for (int i = 0; i<=haystack.size()-l; i++) {
            if (haystack.substr(i, l) == needle) return i;
        }
        return -1;
    }
};